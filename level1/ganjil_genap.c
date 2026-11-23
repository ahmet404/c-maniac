#include <stdio.h>

int main(void) {
  printf("## Program Mengecek Bilangan Ganjil Genap ##\n");
  printf("============================================\n");

  int num;
  printf("Input angka: ");
  scanf("%d", &num);

  if (num % 2 != 0) {
    printf("%d adalah bilangan ganjil\n", num);
  } else {
    printf("%d adalah bilangan genap!\n", num);
  }
  return 0;
}
