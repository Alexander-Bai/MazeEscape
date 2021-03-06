/*
 * Class TIME_VALIDITY_CHECKER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1001 [] = {0xFF01,222,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1001 [] = {0xFF01,239,1000,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1001 [] = {0xFF01,1000,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1001 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1001 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1001 [] = {0xFF01,1000,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1001 [] = {0xFF01,1000,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1001 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1001 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1001 [] = {0xFF01,222,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1001 [] = {0xFF01,222,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1001 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1001 [] = {0xFF01,1000,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1001 [] = {0xFF01,957,0xFFFF};
static const EIF_TYPE_INDEX egt_14_1001 [] = {0xFF01,222,0xFFFF};
static const EIF_TYPE_INDEX egt_15_1001 [] = {0xFF01,222,0xFFFF};


static const struct desc_info desc_1001[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1001), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1001), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1001), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1001), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1001), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1001), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1001), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1001), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1001), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1001), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1001), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1001), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07D1 /*1000*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1001), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13337, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13338, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1001), 13339, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_1001), 13340, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13341, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13342, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13343, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13344, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13345, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_1001), 13346, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13347, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13348, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13349, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0189 /*196*/), 13352, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13358, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13359, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13360, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13357, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13356, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0189 /*196*/), 13350, 8},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13351, 0},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13353, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13354, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13355, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13361, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13362, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13363, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13364, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01A1 /*208*/), 13365, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13621, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13622, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0183 /*193*/), 13623, 0xFFFFFFFF},
};
void Init1001(void)
{
	IDSC(desc_1001, 0, 1000);
	IDSC(desc_1001 + 1, 1, 1000);
	IDSC(desc_1001 + 32, 405, 1000);
	IDSC(desc_1001 + 36, 406, 1000);
	IDSC(desc_1001 + 42, 394, 1000);
	IDSC(desc_1001 + 51, 401, 1000);
	IDSC(desc_1001 + 61, 402, 1000);
}


#ifdef __cplusplus
}
#endif
