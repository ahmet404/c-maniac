#include <stdio.h>
#include "suhu.h"


char *str_suhu[4] = {"Celcius", "Fahrenheit", "Kelvin", "Reamur"};
float suhu;
int from_suhu;
char ops;

Suhu from_cc(float C) {
  Suhu c;
  c.fahrenheit = (C * 1.8) + 32;
  c.kelvin = C + 273.15;
  c.reamur = C * 0.8;
  return c;
}

Suhu from_f(float F) {
  Suhu f;
  f.celcius = (F-32) * 1.8;
  f.kelvin = (F-32) * 1.8 + 273.15;
  f.reamur = (F-32) * (4.00/9.00);
  return f;
}

Suhu from_k(float K) {
  Suhu k;
  k.celcius = K - 273.15;
  k.fahrenheit = (K - 273.15) * 1.8 + 32;
  k.reamur = (K-273.15) * 0.8;
  return k;
}

Suhu from_r(float R) {
  Suhu r;
  r.celcius =  R * 1.25;
  r.fahrenheit = (R * 2.25) + 32;
  r.kelvin = (R * 1.25) + 273.15;
  return r;
}

void satuan_suhu() {
  printf("## Konversi Satuan Suhu ##\n");
  printf("===========================\n");
  for (int i=0; i<4; i++) {
    printf("%d. %s\n", i+1, str_suhu[i]);
  }
  printf("Conversion From: ");
  scanf("%d", &from_suhu);
  printf("Input Suhu: ");
  scanf("%f", &suhu);
  printf("===========================\n");

  if (from_suhu == 1) {
    printf("From Celcius:\n");
    Suhu c = from_cc(suhu);
    printf("Fahrenheit\t: %.2f\u00B0F\n", c.fahrenheit);
    printf("Kelvin\t\t: %.2f\u00B0K\n", c.kelvin);
    printf("Reamur\t\t: %.2f\u00B0R\n", c.reamur);
  } else if(from_suhu == 2) {
    printf("From Fahrenheit:\n");
    Suhu f = from_f(suhu);
    printf("Celcius\t: %.2f\u00B0C\n", f.celcius);
    printf("Kelvin\t: %.2f\u00B0K\n", f.kelvin);
    printf("Reamur\t: %.2f\u00B0R\n", f.reamur);
  } else if (from_suhu == 3) {
    printf("From Kelvin:\n");
    Suhu k = from_k(suhu);
    printf("Celcius\t\t: %.2f\u00B0C\n", k.celcius);
    printf("Fahrenheit\t: %.2f\u00B0F\n", k.fahrenheit);
    printf("Reamur\t\t: %.2f\u00B0R\n", k.reamur);
  } else if (from_suhu == 4) {
    printf("From Reamur:\n");
    Suhu r = from_r(suhu);
    printf("Celcius\t\t: %.2f\u00B0C\n", r.celcius);
    printf("Fahrenheit\t: %.2f\u00B0F\n", r.fahrenheit);
    printf("Kelvin\t\t: %.2f\u00B0K\n", r.kelvin);
  } else {
    printf("Inputan Angka tidak valid!\n");
  }
}
