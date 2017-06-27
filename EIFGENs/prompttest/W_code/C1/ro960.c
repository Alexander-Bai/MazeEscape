/*
 * Code for class ROOM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F960_7122(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7123(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7124(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7125(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7126(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7127(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7128(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7129(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7130(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7131(EIF_REFERENCE);
extern void F960_7135(EIF_REFERENCE);
extern void F960_7136(EIF_REFERENCE);
extern void F960_7137(EIF_REFERENCE);
extern void F960_7138(EIF_REFERENCE);
extern void F960_7139(EIF_REFERENCE);
extern void F960_7140(EIF_REFERENCE);
extern void EIF_Minit960(void);

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

/* {ROOM}.room_id */
EIF_TYPED_VALUE F960_7122 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4982,Dtype(Current)));
	return r;
}


/* {ROOM}.room_type */
EIF_TYPED_VALUE F960_7123 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4983,Dtype(Current)));
	return r;
}


/* {ROOM}.event */
EIF_TYPED_VALUE F960_7124 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4984,Dtype(Current)));
	return r;
}


/* {ROOM}.north_side */
EIF_TYPED_VALUE F960_7125 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4985,Dtype(Current)));
	return r;
}


/* {ROOM}.east_side */
EIF_TYPED_VALUE F960_7126 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4986,Dtype(Current)));
	return r;
}


/* {ROOM}.south_side */
EIF_TYPED_VALUE F960_7127 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4987,Dtype(Current)));
	return r;
}


/* {ROOM}.west_side */
EIF_TYPED_VALUE F960_7128 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4988,Dtype(Current)));
	return r;
}


/* {ROOM}.has_visited */
EIF_TYPED_VALUE F960_7129 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(4989,Dtype(Current)));
	return r;
}


/* {ROOM}.is_looted */
EIF_TYPED_VALUE F960_7130 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(4990,Dtype(Current)));
	return r;
}


/* {ROOM}.is_occupied */
EIF_TYPED_VALUE F960_7131 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(4991,Dtype(Current)));
	return r;
}


/* {ROOM}.visited */
void F960_7135 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "visited";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 959, Current, 0, 0, 13258);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(959, Current, 13258);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4989, 0x04000000, 1); /* has_visited */
	*(EIF_BOOLEAN *)(Current + RTWA(4989, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ROOM}.unvisited */
void F960_7136 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unvisited";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 959, Current, 0, 0, 13259);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(959, Current, 13259);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4989, 0x04000000, 1); /* has_visited */
	*(EIF_BOOLEAN *)(Current + RTWA(4989, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ROOM}.occupy */
void F960_7137 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "occupy";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 959, Current, 0, 0, 13260);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(959, Current, 13260);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4991, 0x04000000, 1); /* is_occupied */
	*(EIF_BOOLEAN *)(Current + RTWA(4991, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ROOM}.unoccupy */
void F960_7138 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unoccupy";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 959, Current, 0, 0, 13261);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(959, Current, 13261);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4991, 0x04000000, 1); /* is_occupied */
	*(EIF_BOOLEAN *)(Current + RTWA(4991, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ROOM}.loot */
void F960_7139 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "loot";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 959, Current, 0, 0, 13262);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(959, Current, 13262);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4990, 0x04000000, 1); /* is_looted */
	*(EIF_BOOLEAN *)(Current + RTWA(4990, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ROOM}.unloot */
void F960_7140 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unloot";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 959, Current, 0, 0, 13263);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(959, Current, 13263);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4990, 0x04000000, 1); /* is_looted */
	*(EIF_BOOLEAN *)(Current + RTWA(4990, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit960 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
