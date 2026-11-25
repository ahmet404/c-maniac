#include <stdio.h>
#include <string.h>

int main(void) {
  printf("Menentukan suatu kata/angka palindrom atau bukan\n"); 

  // input kata/angka yg ingin di cek
  char kata[30];
  printf("Input kata/angka: ");
  scanf(" %[^\n]s", kata);
  
  // hitung banyak karakter/angka
  size_t size = strlen(kata);

  // buat variable untuk menyimpan akhir karakter
  int akhir = size - 1;

  // buat perulangan untuk cek satu persatu karakternya mulai dari
  // karakter pertama dengan karakter terakhir apakah sama, dan lanjut karakter kedua dengan karakter kedua dari belakang dan seterusnya
  // yg dicek sampai setengah teks saja,

  // counter i dideklarasikan diluar karena akan digunakan diluar perulangan
  // karena untuk menyimpan jumlah karakter yg sama,
  // sehingga dapat digunakan untuk menentukan palindrom 
  int i;
  for (i=0; i<size/2; i++) {
    if (kata[i] != kata[akhir-i]) {
      printf("%s bukan palindrom!\n", kata);
      break;
    }
  }

  if (i == size/2) {
    printf("%s adalah palindrom!\n", kata);
    printf("Jumlah karakter yg sama: %d", i);
  }

  return 0;
}
