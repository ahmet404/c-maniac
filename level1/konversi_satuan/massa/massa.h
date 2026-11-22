#ifndef MASSA_H
#define MASSA_H

extern char *str_massa[5];
extern int from_massa;
extern float berat;

typedef struct { 
  float ton;
  float kg;
  float gram;
  float mg;
  float pon;
} Massa;


void satuan_massa();

#endif
