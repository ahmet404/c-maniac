#include <stdio.h>

int is_prime(int n) {
  if (n < 2) return 0;
  for (int i=2; i<n; i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main(void) {
  // menentukan angka tersebut bilangan prima atau bukan
  printf("Menentukan Angka Bilangan Prima\n");
  
  // input angka yg ingin di cek
  int num;
  printf("Input angka: ");
  scanf("%d", &num);

  // defenisikan variable sebagai flag / penanda
  int prime = 1;

  // cek jika angka dibawah 2 bukan prima
  if (num < 2) {
    prime = 0;
  }

  // cek angka dengan beberapa pembagi
  // counter i sebagai pembagi
  int pembagi;

  // disini kenapa kondisi akan berakhir dengan nilai/2 ?
  // karena kita hanya akan membagi sampai separuh dari bilangannya
  // sebenarnya gak mesti dibagi 2 juga, bisa juga dikurang 1 atau yg penting jangan sampai dibagi bilangnnya sendiri
  // i < num, bisa saja hanya saja terlalu banyak perulangan jika angka yg dicarinya besar
  // maka dari kondisi terbaik untuk berhenti ya dibagi 2, tapi ingat jangan (i < num/2) karena hasilnya salah, 
  // yg benar itu (i <= num/2)
  for (int i=2; i <= num/2; i++) {
    if (num % i == 0) {
      prime = 0;
      pembagi = i;
      break;
    }
  }
  
  if (prime) {
    printf("Angka %d adalah bilangan prima!\n", num);
  } else {
    printf("Angka %d bukan bilangan prima karena habis dibagi %d!\n", num, pembagi);
  }

  

  // menampilkan deret bilangan prima sampai n
  // deklarasi variable counter untuk deret angka dan pembagi 
  int n, p;

  // buat outer looping untuk deretan angka
  for (n=2; n<=100; n++) {

    // buat inner looping untuk pembagi
    for (p=2; p<n; p++) {

      // cek apakah bilangan habis dibagi selain dirinya sendiri dan angka 1
      if (n % p == 0) {
        break;
      }

    }

    // cek apakah pembagi sama dengan bilangan
    if (p == n) {
      printf("%d ", n);
    }
  }


  // menampilkan deret bilangan prima sebanyak n
  
  int batas;
  int counter=1;
  printf("\nMau nampilin bilangan prima berapa banyak? ");
  scanf("%d", &batas);

  int angka=2;
  while (counter <= batas) {
    if (is_prime(angka)) {
      printf("%d ", angka);
      counter++;
    }
    angka++;
  }


  
  return 0;
}

