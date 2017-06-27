/*
 * Code for class TREASURE_EVENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F992_7334(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit992(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TREASURE_EVENT}.encounter */
void F992_7334 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encounter";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(16);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,tr8);
	RTLR(10,loc3);
	RTLR(11,tr9);
	RTLR(12,tr10);
	RTLR(13,Current);
	RTLR(14,loc2);
	RTLR(15,loc1);
	RTLIU(16);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 991, Current, 5, 1, 13436);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(991, Current, 13436);
	RTCC(arg1, 991, l_feature_name, 1, eif_new_type(984, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tr2 = RTMS_EX_H("normal",6,2136892268);
		ur1 = tr2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,2);
		tr4 = RTMS_EX_H("poison",6,1990226286);
		ur1 = tr4;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr3))(tr3, ur1x)).it_b);
		tb2 = tb3;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
		ti4_2 = ti4_3;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,3);
		tr6 = RTMS_EX_H("bleeding",8,430264935);
		ur1 = tr6;
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		tb3 = tb4;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
		ti4_3 = ti4_4;
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5141, "gold", arg1));
		ti4_4 = ti4_5;
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		RTE_OT
		ti4_6 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5141, "gold", arg1));
		ti4_5 = ti4_6;
		tr8 = NULL;
		RTE_O
		tr8 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80003BB, 0, 0); /* loc3 */
	tr9 = RTLN(eif_new_type(955, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4954, Dtype(tr9)))(tr9);
	RTNHOOK(2,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr9);
	RTHOOK(3);
	tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr10 = RTMS_EX_H("poison",6,1990226286);
	ur1 = tr10;
	tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr9))(tr9, ur1x)).it_b);
	if (tb4) {
		RTHOOK(4);
		tr9 = RTMS_EX_H("You are still suffering from poison.\012",37,551342602);
		ur1 = tr9;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(5);
		ui4_1 = ((EIF_INTEGER_32) 10L);
		tr9 = RTMS_EX_H("poison",6,1990226286);
		ur1 = tr9;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5151, "takedamage", arg1))(arg1, ui4_1x, ur1x);
	} else {
		RTHOOK(6);
		tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr10 = RTMS_EX_H("bleeding",8,430264935);
		ur1 = tr10;
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr9))(tr9, ur1x)).it_b);
		if (tb4) {
			RTHOOK(7);
			tr9 = RTMS_EX_H("You are still bleeding.\012",24,1872665098);
			ur1 = tr9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(8);
			ui4_1 = ((EIF_INTEGER_32) 5L);
			tr9 = RTMS_EX_H("bleeding",8,430264935);
			ur1 = tr9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5151, "takedamage", arg1))(arg1, ui4_1x, ur1x);
		}
	}
	RTHOOK(9);
	tr9 = RTMS_EX_H("You have discovered a treasure chest, but it could be booby trapped!\012",69,1109277194);
	ur1 = tr9;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(10);
	tr9 = RTMS_EX_H("Are you willing to take the risk to open it\? yes/no: ",53,1836369952);
	ur1 = tr9;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(11);
	tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(189, "read_line", tr9))(tr9);
	RTHOOK(12);
	RTDBGAL(Current, 2, 0xF80000DE, 0, 0); /* loc2 */
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(12,1);
	tr9 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(144, "last_string", loc2))(loc2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(12,2);
	tr10 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr9))(tr9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr10);
	RTHOOK(13);
	tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(172, "put_new_line", tr9))(tr9);
	RTHOOK(14);
	RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(15);
		if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 1L))) break;
		RTHOOK(16);
		tr9 = RTMS_EX_H("yes",3,7955827);
		ur1 = tr9;
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc2))(loc2, ur1x)).it_b);
		if (tb4) {
			RTHOOK(17);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 4L);
			ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4956, "rngroll", loc3))(loc3, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_6;
			RTHOOK(18);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(19);
				RTDBGAL(Current, 1, 0xF80003C1, 0, 0); /* loc1 */
				tr9 = RTLN(eif_new_type(962, 0x01).id);
				tr10 = RTMS_EX_H("bandage",7,1808639077);
				ur1 = tr10;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5006, Dtype(tr9)))(tr9, ur1x);
				RTNHOOK(19,1);
				loc1 = (EIF_REFERENCE) RTCCL(tr9);
			} else {
				RTHOOK(20);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(21);
					RTDBGAL(Current, 1, 0xF80003C1, 0, 0); /* loc1 */
					tr9 = RTLN(eif_new_type(962, 0x01).id);
					tr10 = RTMS_EX_H("antidote",8,1466584165);
					ur1 = tr10;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5006, Dtype(tr9)))(tr9, ur1x);
					RTNHOOK(21,1);
					loc1 = (EIF_REFERENCE) RTCCL(tr9);
				} else {
					RTHOOK(22);
					RTDBGAL(Current, 1, 0xF80003C1, 0, 0); /* loc1 */
					tr9 = RTLN(eif_new_type(962, 0x01).id);
					tr10 = RTMS_EX_H("potion",6,26640494);
					ur1 = tr10;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5006, Dtype(tr9)))(tr9, ur1x);
					RTNHOOK(22,1);
					loc1 = (EIF_REFERENCE) RTCCL(tr9);
				}
			}
			RTHOOK(23);
			ui4_1 = ((EIF_INTEGER_32) 50L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5155, "gain_gold", arg1))(arg1, ui4_1x);
			RTHOOK(24);
			tr9 = RTMS_EX_H("You gained 50 gold!\012",20,652529162);
			ur1 = tr9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(25);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5148, "obtain", arg1))(arg1, ur1x);
			RTHOOK(26);
			tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(26,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(172, "put_new_line", tr9))(tr9);
		} else {
			RTHOOK(27);
			tr9 = RTMS_EX_H("no",2,28271);
			ur1 = tr9;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc2))(loc2, ur1x)).it_b);
			if (tb4) {
			} else {
				RTHOOK(28);
				RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
				loc5--;
				RTHOOK(29);
				tr9 = RTMS_EX_H("Invalid input. Please type \'yes\' or \'no\': ",42,489879840);
				ur1 = tr9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(30);
				tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(30,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(189, "read_line", tr9))(tr9);
				RTHOOK(31);
				RTDBGAL(Current, 2, 0xF80000DE, 0, 0); /* loc2 */
				loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(31,1);
				tr9 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(144, "last_string", loc2))(loc2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(31,2);
				tr10 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr9))(tr9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr10);
				RTHOOK(32);
				tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(32,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(172, "put_new_line", tr9))(tr9);
			}
		}
		RTHOOK(33);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		loc5++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(34);
		RTCT("player_normal", EX_POST);
		tb4 = '\01';
		RTCO(tr1);
		if (tb1) {
			ti4_6 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
			RTCO(tr2);
			tb4 = (EIF_BOOLEAN)(ti4_6 == ti4_1);
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(35);
		RTCT("player_poison", EX_POST);
		tb4 = '\01';
		RTCO(tr3);
		if (tb2) {
			ti4_6 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
			RTCO(tr4);
			tb4 = (EIF_BOOLEAN)(ti4_6 == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 10L)));
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(36);
		RTCT("player_bleeding", EX_POST);
		tb4 = '\01';
		RTCO(tr5);
		if (tb3) {
			ti4_6 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
			RTCO(tr6);
			tb4 = (EIF_BOOLEAN)(ti4_6 == (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 5L)));
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(37);
		RTCT("gold_set", EX_POST);
		tb4 = '\01';
		ti4_6 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5141, "gold", arg1));
		RTCO(tr7);
		if (!(EIF_BOOLEAN)(ti4_6 == ti4_4)) {
			ti4_6 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5141, "gold", arg1));
			RTCO(tr8);
			tb4 = (EIF_BOOLEAN)(ti4_6 == (EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 50L)));
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

void EIF_Minit992 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
