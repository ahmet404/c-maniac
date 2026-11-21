#include <stdio.h>
#include <stdlib.h>
#include "panjang.h"

char *str_panjang[7] = {"Kilometer", "Meter", "Centimeter", "Milimeter", "Nanometer", "Kaki", "Inci"};
char *inisial[8] = {"","km", "m", "cm", "mm", "nm", "ft", "in"};
int from_p, to_p;
float panjang;
double hasil;

double from_km(float km , int n) {
  double hasil;
  if (n == 2) {
    hasil = km * 1000;
  } else if (n == 3) {
    hasil = km * 100000;
  } else if (n == 4) {
    hasil = km * 1000000;
  } else if (n == 5) {
    hasil = km * 1000000 * 1000000;
  } else if (n == 6) {
    hasil = km * 3280.84;
  } else if (n == 7) {
    hasil = km * 100000 / 2.54;
  } else {
    printf("Inputan tidak valid!\n");
  }
  return hasil;
}

void satuan_panjang() {
  printf("## Konversi Satuan Suhu ##\n");
  printf("===========================\n");
  for (int i=0; i<7; i++) {
    printf("%2d. %s\n", i+1, str_panjang[i]);
  }
  printf("Conversion from: ");
  scanf("%d", &from_p);

  if (from_p < 1 && from_p > 7) {
    printf("Inputan tidak valid!\n");
  }

  printf("Input panjang %s: ", inisial[from_p]);
  scanf("%f", &panjang);

  if (from_p == 1) {

    char opt = 'Y';
    while (opt == 'Y' || opt == 'y') {
      printf("## Conversion from %s ##\n", inisial[from_p]);
      printf("========================\n");
      printf("To: ");
      scanf("%d", &to_p);
      hasil = from_km(panjang, to_p);
      printf("Hasil: %.2f %s\n", hasil,inisial[to_p]);
      printf("Lagi (y/t): ");
      scanf(" %c", &opt);
    }
  } else {
    satuan = 0;
    system("clear");
  }
}
