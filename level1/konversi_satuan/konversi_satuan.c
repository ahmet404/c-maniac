#include <stdio.h>
#include <stdlib.h>
#include "suhu.h"
#include "panjang.h"

static const char *str_satuan[5] = {"Suhu", "Panjang", "Massa", "Waktu", "Exit"};
static int satuan = 0;

int main(void) {
  while (satuan == 0) {
    printf("## Program Konversi Satuan ##\n");
    printf("=============================\n");
    for (int i=0; i<5; i++) {
      printf("%d. %s\n", i+1, str_satuan[i]);
    }
    printf("Pilih satuan: ");
    scanf("%d", &satuan);
    if (satuan > 4) {
      exit(0);
    }

    system("clear");
    while (satuan == 1) {
      satuan_suhu();
      char opt;
      printf("Ingin keluar dari konversi suhu?(y/t): ");
      scanf(" %c", &opt);
      if (opt == 'y' || opt == 'Y') {
        satuan = 0;
        system("clear");
      } else {
        satuan = 1;
        system("clear");
      }
    }

    while (satuan == 2) {
      satuan_panjang();
      char opt;
      printf("Ingin keluar dari konversi panjang?(y/t): ");
      scanf(" %c", &opt);
      if (opt == 'y' || opt == 'Y') {
        satuan = 0;
        system("clear");
      } else {
        satuan = 2;
        system("clear");
      }

    }
  }

  return 0;
}
