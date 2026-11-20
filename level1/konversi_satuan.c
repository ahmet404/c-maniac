#include <stdio.h>
#include <stdlib.h>

float celcius_to_fahrenheit(float suhu) {
  float F = (suhu * 1.8) + 32;
  return F;
}




int running = 1;

int main(void) {
  while (running) {
    int satuan;
    printf("## Program Konversi Satuan ##\n");
    printf("=============================\n");
    printf("1. Suhu\n");
    printf("2. Panjang\n");
    printf("3. Massa\n");
    printf("4. Waktu\n");
    printf("pilih satuan: ");
    scanf("%d", &satuan);

    system("clear");
    while (satuan == 1) {
      float celcius, fahrenheit, kelvin, reamur, suhu;
      int from_suhu, to_suhu;
      char opt;
      printf("## Konversi Satuan Suhu ##\n");
      printf("===========================\n");
      printf("1. Celcius\n");
      printf("2. Fahrenheit\n");
      printf("3. Kelvin\n");
      printf("4. Reamur\n");
      printf("0. Back\n");
      printf("From: ");
      scanf("%d", &from_suhu);
      printf("To  : ");
      scanf("%d", &to_suhu);

      if (from_suhu == 1 && to_suhu == 2) {
        system("clear");
        printf("## Celcius to Fahrenheit ##\n");
        printf("===========================\n");
        printf("Input suhu: ");
        scanf("%f", &suhu);
        suhu = celcius_to_fahrenheit(suhu);
      } else if (from_suhu == 1 && to_suhu == 3) {
      }
      printf("Hasil: %.2f\n", suhu);
      printf("Ingin lagi?: ");
      scanf(" %c", &opt);
    }
  }
  return 0;
}


