/*
 * Code for class GAME_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F962_7145(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_7146(EIF_REFERENCE);
extern void F962_7147(EIF_REFERENCE);
extern void F962_7148(EIF_REFERENCE);
extern void EIF_Minit962(void);

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

/* {GAME_OBJECT}.name */
EIF_TYPED_VALUE F962_7145 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5002,Dtype(Current)));
	return r;
}


/* {GAME_OBJECT}.qty */
EIF_TYPED_VALUE F962_7146 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5003,Dtype(Current)));
	return r;
}


/* {GAME_OBJECT}.reduce_qty */
void F962_7147 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reduce_qty";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 0, 13278);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13278);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5003, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5003, 0x10000000, 1); /* qty */
	(*(EIF_INTEGER_32 *)(Current + RTWA(5003, dtype)))--;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("qty_reduced", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5003, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 < ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {GAME_OBJECT}.increase_qty */
void F962_7148 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "increase_qty";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 0, 13279);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13279);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5003, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5003, 0x10000000, 1); /* qty */
	(*(EIF_INTEGER_32 *)(Current + RTWA(5003, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("qty_increased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5003, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit962 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
