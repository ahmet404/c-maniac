#include <stdio.h>
#include "panjang.h"

static const char *str_panjang[] = {"Kilometer", "Meter", "Centimeter", "Milimeter", "Nanometer", "Kaki", "Inci"};
static const char *inisial[] = {"km", "m", "cm", "mm", "nm", "ft", "in"};
static const double to_meter[] = {1000.0, 1.0,0.01,0.001, 1e-9, 0.3048, 0.0254};

int from_p, to_p;
float panjang;
double hasil = 0.0;

double konversi_panjang(double nilai, int from, int to) {
  return nilai * to_meter[from] / to_meter[to];
}

void satuan_panjang() {
  char opt = 'y';
  printf("## Konversi Satuan Suhu ##\n");
  printf("===========================\n");
  for (int i=0; i<7; i++) {
    printf("%2d. %s\n", i+1, str_panjang[i]);
  }
  printf("Conversion from: ");
  scanf("%d", &from_p);

  printf("To: ");
  scanf("%d", &to_p);
  while (opt == 'y' || opt == 'Y') {
    printf("Input panjang (%s): ", inisial[from_p-1]);
    scanf("%f", &panjang);

    printf("\n## %s to %s ##\n", inisial[from_p-1], inisial[to_p-1]);
    printf("==============\n");
    hasil = konversi_panjang(panjang, from_p-1, to_p-1);
    printf("%g %s = %g %s\n", panjang, inisial[from_p-1], hasil, inisial[to_p-1]);
    printf("Lagi (y/t): ");
    scanf(" %c", &opt);
  }
}
