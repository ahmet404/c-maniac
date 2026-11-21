#ifndef SUHU_H
#define SUHU_H

typedef struct {
  float celcius;
  float fahrenheit;
  float kelvin;
  float reamur;
} Suhu;

Suhu from_cc(float C);
Suhu from_f(float F);
Suhu from_k(float K);
Suhu from_r(float R);

extern char *str_suhu[4];
extern float suhu;
extern int from_suhu;

void satuan_suhu();



#endif
