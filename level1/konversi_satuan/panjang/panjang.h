#ifndef PANJANG_H
#define PANJANG_H

extern char *str_panjang[7];
extern char *inisial[8];
extern int from_p, to_p;
extern double hasil;
extern float panjang;

double from_km(float km, int n);
double from_m(float m, int n);
double from_cm(float cm, int n);
double from_mm(float mm, int n);
double from_nm(float nm, int n);
double from_ft(float ft, int n);
double from_in(float in, int n);

void satuan_panjang();

#endif
