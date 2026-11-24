#include <stdio.h>

void ganjil_genap(int n) {
  if (n % 2 != 0) {
    printf("%d adalah bilangan ganjil!\n", n);
  } else {
    printf("%d adalah bilangan genap!\n", n);
  }
}

void deret_ganjilgenap(int awal, int akhir) {
  printf("\nBilangan Genap: ");
  for (int i=awal; i<=akhir; i++) {
    if (i % 2 != 0) {
      continue;
    }
    printf("%d ", i);
  }
  printf("\nBilangan Ganjil: ");
  for (int i=awal; i<=akhir; i++) {
    if (i % 2 == 0) {
      continue;
    }
    printf("%d ", i);
  }
}

void show_deret(int n) {
  printf("\n\nBilangan Genap: ");
  for (int i=1; i<=n; i++) {
    printf("%d ", i*2);
  }
  printf("\nBilangan Genap: ");
  for (int i=1; i<=n; i++) {
    printf("%d ", i*2-1);
  }
}
 
int main(void) {

  // mementukan angka tersebut bilangan ganjil atau genap
  printf("Menentukan Angka Bilangan Ganjil Genap\n");
  int num;
  printf("Input Angka: ");
  scanf("%d", &num);
  ganjil_genap(num);

  // menampilkan deret bilangan ganjil dan genap dengan awal dan akhir yg ditentukan
  int awal, akhir;
  printf("\nInput angka awal: ");
  scanf("%d", &awal);
  printf("Input angka akhir: ");
  scanf("%d", &akhir);

  deret_ganjilgenap(awal, akhir);


  // menampilkan deret bilangan ganjil genap sebanyak n kali
  show_deret(num);




  printf("\n\n\n");
}
