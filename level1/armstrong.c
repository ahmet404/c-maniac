#include <stdio.h>

int pangkat(int n, int jlh_pangkat) {
  int hasil=1;
  for (int i=0; i<jlh_pangkat; i++) {
    hasil *= n;
  }
  return hasil;
}

int hitung_digit(int n) {
  int digit=0;

  do {
    n/=10;
    digit++;
  } while (n != 0);

  return digit;
}


int main(void) {

  // Bilangan Armstrong
  // bilangan yang jumlahnya sama dengan jumlah semua digitnya, yg mana tiap digitnya dipangkatkan dengan banyaknya digit bilangan itu
  // misal: 153 punya 3 digit angka sehingga tiap digitnya dipangkatkan 3 => 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

  // input angka yg ingin di cek
  int num;
  printf("Input angka: ");
  scanf("%d", &num);

  // hitung jumlah digitnya
  int jlh_digit = hitung_digit(num);

  int temp = num;
  int digit;
  int sum = 0;

  // kenapa menggunakan expression (temp > 0) dibanding (temp != 0) ?
  // agar nilai input negatif tidak dijalankan 
  while (temp > 0) {

    // ambil digit paling belakang 
    digit = temp % 10;

    // pangkatkan digit dengan jumlah digit lalu jumlahkan
    sum = sum + pangkat(digit, jlh_digit);

    // buang digit terakhir
    temp /= 10;
  }
  
  printf("Jumlah digit: %d\n", jlh_digit);
  printf("Hasil penjumlahan pangkat: %d\n", sum);

  // cek jika nilai input sama dengan jumlah dari pangkat maka bilangan tersebut adalah armstrong
  if (sum == num) {
    printf("%d adalah bilangan armstrong!\n", num);
  } else {
    printf("%d bukan bilangan armstrong!\n", num);
  }







  return 0;
}
