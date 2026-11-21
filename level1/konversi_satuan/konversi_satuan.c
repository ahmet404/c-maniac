#include <stdio.h>
#include <stdlib.h>
#include "suhu.h"
#include "panjang.h"

static const char *str_satuan[4] = {"1. Suhu", "2. Panjang", "3. Massa", "4. Waktu"};

int main(void) {
  while (satuan == 0) {
    printf("## Program Konversi Satuan ##\n");
    printf("=============================\n");
    for (int i=0; i<4; i++) {
      printf("%s\n", str_satuan[i]);
    }
    printf("Pilih satuan: ");
    scanf("%d", &satuan);

    system("clear");
    while (satuan == 1) {
      satuan_suhu();
    }
    while (satuan == 2) {
      satuan_panjang();
    }
  }

  return 0;
}
