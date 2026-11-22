#include <stdio.h>
#include "panjang.h"

char *str_panjang[7] = {"Kilometer", "Meter", "Centimeter", "Milimeter", "Nanometer", "Kaki", "Inci"};
char *inisial[8] = {"","km", "m", "cm", "mm", "nm", "ft", "in"};
int from_p, to_p;
float panjang;
double hasil;

double from_km(float km , int n) {
  long double hasil;
  if (n == 2) {
    hasil = km * 1000.0;
  } else if (n == 3) {
    hasil = km * 100000.0;
  } else if (n == 4) {
    hasil = km * 1000000.0;
  } else if (n == 5) {
    hasil = km * 1e12;
  } else if (n == 6) {
    hasil = km * 3280.84;
  } else if (n == 7) {
    hasil = km * 100000.0 / 2.54;
  } else {
    printf("Inputan tidak valid!\n");
  }
  return hasil;
}

double from_m (float m, int n) {
  double hasil;
  if (n == 1) {
    hasil = m / 1000.0;
  } else if (n == 3) {
    hasil = m * 100.0;
  } else if (n == 4) {
    hasil = m * 1000.0;
  } else if (n == 5) {
    hasil = m * 1000000.0;
  } else if (n == 6) {
    hasil = m * 3.28084;
  } else if (n == 7) {
    hasil = m * 100 / 2.54;
  } else {
    printf("Inputan tidak valid!\n");
  }
  return hasil;
}

// char *str_panjang[7] = {"Kilometer", "Meter", "Centimeter", "Milimeter", "Nanometer", "Kaki", "Inci"};
double from_cm (float cm, int n) {
  double hasil;
  if (n == 1) {
    hasil = cm / 100000.0;
  } else if (n == 2) {
    hasil = cm / 100;
  } else if (n == 4) {
    hasil = cm * 10;
  } else if (n == 5) {
    hasil = cm * 1000000.0;
  } else if (n == 6) {
    hasil = cm * 0.0328084;
  } else if (n == 7) {
    hasil = cm / 2.54;
  } else {
    printf("Inputan tidak valid!\n");
  }
  return hasil;
}

double from_mm (float mm, int n) {
  double hasil;
  if (n == 1) {
    hasil = mm / 1000000.0;
  } else if (n == 2) {
    hasil = mm / 1000;
  } else if (n == 3) {
    hasil = mm / 10;
  } else if (n == 5) {
    hasil = mm * 1000000.0;
  } else if (n == 6) {
    hasil = mm * 0.00328084;
  } else if (n == 7) {
    hasil = mm / 10 / 2.54;
  } else {
    printf("Inputan tidak valid!\n");
  }
  return hasil;
}

double from_nm (float nm, int n) {
  double hasil;
  if (n == 1) {
    hasil = nm / 1e12;
  } else if (n == 2) {
    hasil = nm / 1e9;
  } else if (n == 3) {
    hasil = nm / 10000000.0;
  } else if (n == 4) {
    hasil = nm / 1000000.0;
  } else if (n == 6) {
    hasil = nm * 0.00000000328084;
  } else if (n == 7) {
    hasil = nm / 10000000.0 / 2.54;
  } else {
    printf("Inputan tidak valid!\n");
  }
  return hasil;
}

double from_ft (float ft, int n) {
  double hasil;
  if (n == 1) {
    hasil = ft * 0.0003048;
  } else if (n == 2) {
    hasil = ft * 0.3048;
  } else if (n == 3) {
    hasil = ft * 30.48;
  } else if (n == 4) {
    hasil = ft * 304.8;
  } else if (n == 5) {
    hasil = ft * 304800000.0;
  } else if (n == 7) {
    hasil = ft * 12;
  } else {
    printf("Inputan tidak valid!\n");
  }
  return hasil;
}

double from_in (float in, int n) {
  double hasil;
  if (n == 1) {
    hasil = in * 0.0000254;
  } else if (n == 2) {
    hasil = in * 0.0254;
  } else if (n == 3) {
    hasil = in * 2.54;
  } else if (n == 4) {
    hasil = in * 25.4;
  } else if (n == 5) {
    hasil = in * 25400000.0;
  } else if (n == 6) {
    hasil = in / 12;
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

  printf("Input panjang %s: ", inisial[from_p]);
  scanf("%f", &panjang);
  printf("## Conversion from %s ##\n", inisial[from_p]);
  printf("========================\n");

  char opt = 'Y';
  if (from_p == 1) {
    while (opt == 'Y' || opt == 'y') {
      printf("To: ");
      scanf("%d", &to_p);
      hasil = from_km(panjang, to_p);
      printf("%.2f km = %.2f %s\n", panjang, hasil,inisial[to_p]);
      printf("Lagi (y/t): ");
      scanf(" %c", &opt);
    }
  } else if (from_p == 2) {
    while (opt == 'y' || opt == 'Y') {
      printf("To: ");
      scanf("%d", &to_p);
      hasil = from_m(panjang, to_p);
      printf("%.2f m = %.2f %s\n", panjang, hasil,inisial[to_p]);
      printf("Lagi (y/t): ");
      scanf(" %c", &opt);
    }
  } else if (from_p == 3) {
    while (opt == 'y' || opt == 'Y') {
      printf("To: ");
      scanf("%d", &to_p);
      hasil = from_cm(panjang, to_p);
      printf("%.2f cm = %.2f %s\n", panjang, hasil,inisial[to_p]);
      printf("Lagi (y/t): ");
      scanf(" %c", &opt);
    }
  } else if (from_p == 4) {
    while (opt == 'y' || opt == 'Y') {
      printf("To: ");
      scanf("%d", &to_p);
      hasil = from_mm(panjang, to_p);
      printf("%.2f mm = %.2f %s\n", panjang, hasil,inisial[to_p]);
      printf("Lagi (y/t): ");
      scanf(" %c", &opt);
    }
  } else if (from_p == 5) {
    while (opt == 'y' || opt == 'Y') {
      printf("To: ");
      scanf("%d", &to_p);
      hasil = from_nm(panjang, to_p);
      if (to_p == 1) {
        printf("%.2f nm = %.12f %s\n", panjang, hasil,inisial[to_p]);
      } else if (to_p == 4){
        printf("%.2f nm = %f %s\n", panjang, hasil,inisial[to_p]);
      } else {
        printf("%.2f nm = %.9f %s\n", panjang, hasil,inisial[to_p]);
      }
      printf("Lagi (y/t): ");
      scanf(" %c", &opt);
    }
  } else if (from_p == 6) {
    while (opt == 'y' || opt == 'Y') {
      printf("To: ");
      scanf("%d", &to_p);
      hasil = from_ft(panjang, to_p);
      printf("%.2f ft = %.2f %s\n", panjang, hasil,inisial[to_p]);
      printf("Lagi (y/t): ");
      scanf(" %c", &opt);
    }
  } else if (from_p == 7) {
    while (opt == 'y' || opt == 'Y') {
      printf("To: ");
      scanf("%d", &to_p);
      hasil = from_in(panjang, to_p);
      printf("%.2f in = %.2f %s\n", panjang, hasil,inisial[to_p]);
      printf("Lagi (y/t): ");
      scanf(" %c", &opt);
    }
  }
}
