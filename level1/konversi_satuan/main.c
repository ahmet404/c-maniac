#include <stdio.h>
#include <stdlib.h>
#include "suhu/suhu.h"
#include "panjang/panjang.h"
#include "massa/massa.h"

static const char *str_satuan[5] = {"Suhu", "Panjang", "Massa", "Waktu", "Exit"};
static int satuan = 0;
static int running = 1;
void (*menu[])(void) = {satuan_suhu, satuan_panjang, satuan_massa};

int main(void) {
  while (running) {
    printf("## Program Konversi Satuan ##\n");
    printf("=============================\n");
    for (int i=0; i<5; i++) {
      printf("%d. %s\n", i+1, str_satuan[i]);
    }
    printf("Pilih satuan: ");
    scanf("%d", &satuan);

    if (satuan == 4) {
      printf("Fitur belum tersedia, silahkan pilih satuan yg lain!\n");
    }

    if (satuan == 5) {
      exit(0);
    }
    
    while (satuan > 0 && satuan <= 3) {
      menu[satuan-1]();
      char opt;
      printf("Ingin keluar dari konversi suhu?(y/t): ");
      scanf(" %c", &opt);
      if (opt == 'y' || opt == 'Y') {
        satuan = 0;
        system("clear");
      } 
    }
    system("clear");
  }

  return 0;
}
