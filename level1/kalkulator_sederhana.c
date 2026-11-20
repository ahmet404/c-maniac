#include <stdio.h>

int main(void) {
  int num1, num2, opt;
  printf("## Program Kalkulator Sederhana ##\n");
  printf("==================================\n");
  printf("1. Penjumlahan\n");
  printf("2. Pengurangan\n");
  printf("3. Perkalian\n");
  printf("4. Pembagian\n");
  printf("5. Modulus\n");
  printf("Pilih operasi: ");
  scanf("%d", &opt);

  printf("Input number 1: ");
  scanf("%d", &num1);
  printf("Input number 2: ");
  scanf("%d", &num2);

  switch (opt) {
    case 1: printf("Hasil Penjumlahan: %d + %d = %d\n", num1, num2, num1 + num2); break; 
    case 2: printf("Hasil Pengurangan: %d - %d = %d\n", num1, num2, num1 - num2); break; 
    case 3: printf("Hasil Perkalian: %d * %d = %d\n", num1, num2, num1 * num2); break; 
    case 4: printf("Hasil Pembagian: %d / %d = %d\n", num1, num2, num1 / num2); break; 
    case 5: printf("Hasil Modulus: %d %% %d = %d\n", num1, num2, num1 % num2); break; 
    default: printf("Inputan tidak valid!\n");break;
  }
  
  return 0;
}
