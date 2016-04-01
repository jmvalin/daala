uint16_t split_cdf[][8] = {
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {27799, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {22193, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {16384, 32768, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {31101, 32445, 32768, 32768, 32768, 32768, 32768, 32768, },
  {13975, 29647, 32768, 32768, 32768, 32768, 32768, 32768, },
  {7594, 28084, 32768, 32768, 32768, 32768, 32768, 32768, },
  {6464, 27972, 32768, 32768, 32768, 32768, 32768, 32768, },
  {5963, 27961, 32768, 32768, 32768, 32768, 32768, 32768, },
  {5640, 27922, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {10922, 21845, 32768, 32768, 32768, 32768, 32768, 32768, },
  {8192, 16384, 24576, 32768, 32768, 32768, 32768, 32768, },
  {8192, 16384, 24576, 32768, 32768, 32768, 32768, 32768, },
  {17637, 29432, 32452, 32768, 32768, 32768, 32768, 32768, },
  {9889, 25931, 32053, 32768, 32768, 32768, 32768, 32768, },
  {8598, 24610, 31828, 32768, 32768, 32768, 32768, 32768, },
  {6666, 22002, 31171, 32768, 32768, 32768, 32768, 32768, },
  {4245, 19226, 30737, 32768, 32768, 32768, 32768, 32768, },
  {4566, 18313, 29648, 32768, 32768, 32768, 32768, 32768, },
  {7281, 19114, 25486, 32768, 32768, 32768, 32768, 32768, },
  {8192, 16384, 24576, 32768, 32768, 32768, 32768, 32768, },
  {8192, 16384, 24576, 32768, 32768, 32768, 32768, 32768, },
  {8192, 16384, 24576, 32768, 32768, 32768, 32768, 32768, },
  {8192, 16384, 24576, 32768, 32768, 32768, 32768, 32768, },
  {8192, 16384, 24576, 32768, 32768, 32768, 32768, 32768, },
  {8192, 16384, 24576, 32768, 32768, 32768, 32768, 32768, },
  {8192, 16384, 24576, 32768, 32768, 32768, 32768, 32768, },
  {6553, 13107, 19660, 26214, 32768, 32768, 32768, 32768, },
  {6553, 13107, 19660, 26214, 32768, 32768, 32768, 32768, },
  {18811, 29814, 32450, 32745, 32768, 32768, 32768, 32768, },
  {10215, 25577, 31763, 32692, 32768, 32768, 32768, 32768, },
  {8861, 24498, 31505, 32663, 32768, 32768, 32768, 32768, },
  {7112, 22104, 30576, 32501, 32768, 32768, 32768, 32768, },
  {3937, 16504, 28152, 32148, 32768, 32768, 32768, 32768, },
  {3208, 13214, 25337, 31402, 32768, 32768, 32768, 32768, },
  {3665, 12700, 23623, 30719, 32768, 32768, 32768, 32768, },
  {3680, 12343, 22904, 30309, 32768, 32768, 32768, 32768, },
  {4143, 12531, 22281, 29861, 32768, 32768, 32768, 32768, },
  {6280, 12014, 17749, 28672, 32768, 32768, 32768, 32768, },
  {6553, 13107, 19660, 26214, 32768, 32768, 32768, 32768, },
  {6553, 13107, 19660, 26214, 32768, 32768, 32768, 32768, },
  {6553, 13107, 19660, 26214, 32768, 32768, 32768, 32768, },
  {6553, 13107, 19660, 26214, 32768, 32768, 32768, 32768, },
  {5461, 10922, 16384, 21845, 27306, 32768, 32768, 32768, },
  {5461, 10922, 16384, 21845, 27306, 32768, 32768, 32768, },
  {21441, 29785, 32222, 32690, 32760, 32768, 32768, 32768, },
  {13211, 24619, 30685, 32426, 32743, 32768, 32768, 32768, },
  {11374, 23203, 30187, 32349, 32737, 32768, 32768, 32768, },
  {9243, 21315, 29439, 32171, 32722, 32768, 32768, 32768, },
  {5374, 17082, 27665, 31792, 32670, 32768, 32768, 32768, },
  {3600, 13236, 24635, 30658, 32478, 32768, 32768, 32768, },
  {2803, 10902, 22136, 29288, 32102, 32768, 32768, 32768, },
  {2455, 9711, 20648, 28415, 31854, 32768, 32768, 32768, },
  {2038, 8728, 19773, 28159, 31859, 32768, 32768, 32768, },
  {3608, 10207, 18406, 25295, 30761, 32768, 32768, 32768, },
  {5345, 11161, 17571, 22893, 29179, 32768, 32768, 32768, },
  {4608, 10368, 15360, 21248, 27648, 32768, 32768, 32768, },
  {4998, 7775, 13884, 16661, 26658, 32768, 32768, 32768, },
  {6553, 10922, 15291, 19660, 26214, 32768, 32768, 32768, },
  {4681, 9362, 14043, 18724, 23405, 28086, 32768, 32768, },
  {4681, 9362, 14043, 18724, 23405, 28086, 32768, 32768, },
  {18957, 28842, 32059, 32672, 32752, 32765, 32768, 32768, },
  {13467, 25691, 31116, 32513, 32722, 32753, 32768, 32768, },
  {12179, 24345, 30567, 32324, 32671, 32754, 32768, 32768, },
  {8921, 21283, 29200, 31948, 32636, 32758, 32768, 32768, },
  {4085, 15251, 26543, 31408, 32542, 32743, 32768, 32768, },
  {2915, 12252, 24096, 30467, 32309, 32701, 32768, 32768, },
  {2723, 11045, 22538, 29529, 31962, 32623, 32768, 32768, },
  {2324, 9490, 19972, 27788, 31114, 32414, 32768, 32768, },
  {1411, 6729, 16798, 26261, 30852, 32416, 32768, 32768, },
  {1844, 6703, 15132, 23954, 29250, 31954, 32768, 32768, },
  {2702, 7915, 14848, 22085, 27411, 31305, 32768, 32768, },
  {3347, 8695, 14682, 20830, 26303, 30860, 32768, 32768, },
  {3389, 8765, 14418, 20207, 25142, 30482, 32768, 32768, },
  {4385, 9252, 13974, 18793, 24190, 29250, 32768, 32768, },
  {4096, 8192, 12288, 16384, 20480, 24576, 28672, 32768, },
  {4096, 8192, 12288, 16384, 20480, 24576, 28672, 32768, },
  {17992, 28133, 31915, 32658, 32746, 32757, 32764, 32768, },
  {13910, 25483, 31030, 32497, 32706, 32749, 32760, 32768, },
  {13126, 24106, 30375, 32253, 32677, 32750, 32759, 32768, },
  {9638, 20500, 27990, 31608, 32500, 32714, 32755, 32768, },
  {5636, 15897, 25590, 30774, 32298, 32688, 32756, 32768, },
  {3830, 12854, 23026, 29628, 31967, 32599, 32742, 32768, },
  {3294, 11549, 21886, 28812, 31700, 32528, 32721, 32768, },
  {2605, 10057, 20201, 27927, 31290, 32357, 32686, 32768, },
  {1631, 7393, 17017, 26033, 30553, 32133, 32654, 32768, },
  {1443, 5898, 14012, 23131, 28842, 31416, 32479, 32768, },
  {1473, 5391, 12365, 21245, 27543, 30623, 32204, 32768, },
  {1573, 5190, 11556, 20012, 26524, 30016, 32055, 32768, },
  {1450, 4865, 10948, 19434, 26196, 29854, 32027, 32768, },
  {2699, 7129, 12202, 17973, 23057, 27184, 31071, 32768, },
};
