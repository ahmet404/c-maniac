#include <stdio.h>
#include "massa.h"

char *str_massa[5] = {"Ton", "Kilogram", "Gram", "Miligram", "Pon"};
int from_massa;
float berat;
enum { TON, KILOGRAM, GRAM, MILIGRAM, PON };

// Massa Ton
Massa buat_ton(float ton) {
  Massa m;
  m.kg = ton * 1000;
  m.gram = ton * 1000000; 
  m.mg = ton * 1000000000;
  m.pon = ton * 2204.62;
  return m;
}
void tampilkan_ton(float berat) {
  Massa ton = buat_ton(berat);
  printf("From Ton: \n");
  printf("%.2f ton = %d kg\n", berat, (int)ton.kg);
  printf("%.2f ton = %d g\n",berat, (int)ton.gram);
  printf("%.2f ton = %lu mg\n",berat, (unsigned long)ton.mg);
  printf("%.2f ton = %.2f lb\n",berat, ton.pon);
}

// Massa Kilogram
Massa buat_kg(float kg) {
  Massa m;
  m.ton = kg / 1000;
  m.gram = kg * 1000;
  m.mg = kg * 1000000;
  m.pon = kg * 2.20462;
  return m;
}
void tampilkan_kg(float berat) {
  Massa kg = buat_kg(berat);
  printf("From Kilogram: \n");
  printf("%.2f kg = %.5f ton\n", berat, kg.ton);
  printf("%.2f kg = %d g\n",berat, (int)kg.gram);
  printf("%.2f kg = %d mg\n",berat, (int)kg.mg);
  printf("%.2f kg = %f lb\n",berat, kg.pon);
}

// Massa gram 
Massa buat_gram(float g) {
  Massa m;
  m.ton = g / 1e6;
  m.kg= g / 1000;
  m.mg = g * 1000;
  m.pon = g * 0.00220462;
  return m;
}
void tampilkan_gram(float berat) {
  Massa g = buat_gram(berat);
  printf("From Gram: \n");
  printf("%.0f g = %f ton\n", berat, g.ton);
  printf("%.0f g = %.2f kg\n",berat, g.kg);
  printf("%.0f g = %.2f mg\n",berat, g.mg);
  printf("%.0f g = %f lb\n",berat, g.pon);
}

// Massa mg
Massa buat_mg(float mg) {
  Massa m;
  m.ton = mg / 1e9;
  m.kg = mg / 1e6;
  m.gram = mg / 1000;
  m.pon = mg * 0.00000220462;
  return m;
}
void tampilkan_mg(float berat) {
  Massa mg = buat_mg(berat);
  printf("From Miligram: \n");
  printf("%.0f mg = %.9f ton\n", berat, mg.ton);
  printf("%.0f mg = %f kg\n",berat, mg.kg);
  printf("%.0f mg = %.4f g\n",berat, mg.gram);
  printf("%.0f mg = %f lb\n",berat, mg.pon);
}

// Massa pound 
Massa buat_pound(float p) {
  Massa m;
  // m.pon = ton * 2204.62;
  m.ton = p / 2204.62;
  m.kg= p / 2.20462;
  m.gram = p / 0.00220462;
  m.mg= p / 0.00000220462;
  return m;
}
void tampilkan_pound(float berat) {
  Massa g = buat_pound(berat);
  printf("From Pound: \n");
  printf("%g lb = %f ton\n", berat, g.ton);
  printf("%g lb = %f kg\n",berat, g.kg);
  printf("%g lb = %f g\n",berat, g.gram);
  printf("%g lb = %f mg\n",berat, g.mg);
}

// fungsi nampilkan massa
void satuan_massa() {
  printf("## Konversi Satuan Massa ##\n");
  printf("===========================\n");

  for (int i=0; i<5; i++) {
    printf("%d. %s\n", i+1, str_massa[i]);
  }
  printf("Conversion From: ");
  scanf("%d", &from_massa);
  printf("Input berat: ");
  scanf("%f", &berat);
  printf("===========================\n");

  if (from_massa == TON) {
    tampilkan_ton(berat);
  } else if (from_massa == KILOGRAM) {
    tampilkan_kg(berat);
  } else if (from_massa == GRAM) {
    tampilkan_gram(berat);
  } else if (from_massa == MILIGRAM) {
    tampilkan_mg(berat);
  } else if (from_massa == PON) {
    tampilkan_pound(berat);
  }
}
