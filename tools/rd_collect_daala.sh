#!/bin/bash
set -e

if [ -z $RD_COLLECT_SUB ]; then
  echo "Please use: $(dirname $0)/rd_collect.sh daala *.y4m"
  exit 1
fi

FILE=$1

BASENAME=$(basename $FILE)-$CODEC
rm $BASENAME.out 2> /dev/null || true
echo $BASENAME

WIDTH=$(head -1 $FILE | cut -d\  -f 2 | tr -d 'W')
HEIGHT=$(head -1 $FILE | cut -d\  -f 3 | tr -d 'H')


#RANGE="58 58.5 59 59.5 60 60.5 61 61.5 62 62.6 63 63.5 64 64.5 65 65.5 66 66.6"
RANGE="52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73"
#RANGE="22 22.5 23 23.5 24 24.5 25 25.5 26 26.5 27 27.5 28 28.5 29"

#RANGE="5 7 11 16 25 37 55 81 122 181 270 400"
#RANGE="1 2 3 4 5 6 7 9 11 13 16 20 25 30 37 45 55 67 81 99 122 148 181 221 270 330 400 500"

for x in $RANGE; do
  OD_DUMP_IMAGES_SUFFIX=$BASENAME $ENCODER_EXAMPLE -k 256 -z 10 -v $x $FILE -o $BASENAME.ogv 2> $BASENAME-$x-enc.out
  SIZE=$(wc -c $BASENAME.ogv | awk '{ print $1 }')
  $DUMP_PSNR $FILE 00000000out-$BASENAME.y4m > $BASENAME-psnr.out 2> /dev/null
  FRAMES=$(cat $BASENAME-psnr.out | grep ^0 | wc -l)
  PIXELS=$(($WIDTH*$HEIGHT*$FRAMES))
  PSNR=$(cat $BASENAME-psnr.out | grep Total | tr -s ' ' | cut -d\  -f $((4+$PLANE*2)))
  PSNRHVS=$($DUMP_PSNRHVS $FILE 00000000out-$BASENAME.y4m 2> /dev/null | grep Total | tr -s ' ' | cut -d\  -f $((4+$PLANE*2)))
  SSIM=$($DUMP_SSIM $FILE 00000000out-$BASENAME.y4m 2> /dev/null | grep Total | tr -s ' ' | cut -d\  -f $((4+$PLANE*2)))
  FASTSSIM=$($DUMP_FASTSSIM -c $FILE 00000000out-$BASENAME.y4m 2> /dev/null | grep Total | tr -s ' ' | cut -d\  -f $((4+$PLANE*2)))
  rm 00000000out-$BASENAME.y4m $BASENAME.ogv $BASENAME-$x-enc.out $BASENAME-psnr.out
  echo $x $PIXELS $SIZE $PSNR $PSNRHVS $SSIM $FASTSSIM >> $BASENAME.out
  #tail -1 $BASENAME.out
done
