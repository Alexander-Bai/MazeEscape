/*
 * Code for class POISON_EVENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F990_7332(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit990(void);

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

/* {POISON_EVENT}.encounter */
void F990_7332 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encounter";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,Current);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 989, Current, 0, 1, 13434);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(989, Current, 13434);
	RTCC(arg1, 989, l_feature_name, 1, eif_new_type(984, 0x01), 0x01);
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
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,2);
		tr3 = RTMS_EX_H("poison",6,1990226286);
		ur1 = tr3;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr2))(tr2, ur1x)).it_b);
		tb2 = tb3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
		ti4_1 = ti4_2;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,3);
		tr5 = RTMS_EX_H("bleeding",8,430264935);
		ur1 = tr5;
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr4))(tr4, ur1x)).it_b);
		tb3 = tb4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
		ti4_2 = ti4_3;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr7 = RTMS_EX_H("poison",6,1990226286);
	ur1 = tr7;
	tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr6))(tr6, ur1x)).it_b);
	if (tb4) {
		RTHOOK(3);
		tr6 = RTMS_EX_H("You are still suffering from poison.\012",37,551342602);
		ur1 = tr6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		ui4_1 = ((EIF_INTEGER_32) 10L);
		tr6 = RTMS_EX_H("poison",6,1990226286);
		ur1 = tr6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5151, "takedamage", arg1))(arg1, ui4_1x, ur1x);
	} else {
		RTHOOK(5);
		tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr7 = RTMS_EX_H("bleeding",8,430264935);
		ur1 = tr7;
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr6))(tr6, ur1x)).it_b);
		if (tb4) {
			RTHOOK(6);
			tr6 = RTMS_EX_H("You took 10 damage from poison but you are not poisoned\012",56,2044020490);
			ur1 = tr6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(7);
			ui4_1 = ((EIF_INTEGER_32) 10L);
			tr6 = RTMS_EX_H("poison",6,1990226286);
			ur1 = tr6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5151, "takedamage", arg1))(arg1, ui4_1x, ur1x);
			RTHOOK(8);
			tr6 = RTMS_EX_H("You are still bleeding.\012",24,1872665098);
			ur1 = tr6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(9);
			ui4_1 = ((EIF_INTEGER_32) 5L);
			tr6 = RTMS_EX_H("bleeding",8,430264935);
			ur1 = tr6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5151, "takedamage", arg1))(arg1, ui4_1x, ur1x);
		} else {
			RTHOOK(10);
			tr6 = RTMS_EX_H("poison",6,1990226286);
			ur1 = tr6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5146, "setstatus", arg1))(arg1, ur1x);
			RTHOOK(11);
			tr6 = RTMS_EX_H("You have been poisoned by the gas in this room!\012\012",49,1927318538);
			ur1 = tr6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("player_normal", EX_POST);
		tb4 = '\01';
		RTCO(tr1);
		if (tb1) {
			tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "status", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			tr7 = RTMS_EX_H("poison",6,1990226286);
			ur1 = tr7;
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr6))(tr6, ur1x)).it_b);
			tb4 = tb5;
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("player_poison", EX_POST);
		tb4 = '\01';
		RTCO(tr2);
		if (tb2) {
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
			RTCO(tr3);
			tb4 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 10L)));
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("player_bleeding", EX_POST);
		tb4 = '\01';
		RTCO(tr4);
		if (tb3) {
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5139, "health", arg1));
			RTCO(tr5);
			tb4 = (EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 15L)));
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

void EIF_Minit990 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
