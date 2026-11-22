#ifndef SUHU_H
#define SUHU_H

typedef struct {
  float celcius;
  float fahrenheit;
  float kelvin;
  float reamur;
} Suhu;

extern char *str_suhu[4];
extern float suhu;
extern int from_suhu;

void satuan_suhu();



#endif
