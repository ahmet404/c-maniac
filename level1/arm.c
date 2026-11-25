#include <stdio.h>

int main(void) {

  // input angka yg mau dicek
  int n;
  printf("Input angka: ");
  scanf("%d", &n);

  // buat temporary variable biar nilai input gak hilang
  int input = n;
  int temp = n;


  // hitung jumlah digit
  int jlh_digit=0;
  while (temp != 0) {
    temp /= 10;
    jlh_digit++;
  }

  int digit;
  int sum = 0;
  while (n != 0) {

    // ambil digit paling belakang 
    digit = n % 10;

    // digit dipangkatkan jumlah digit
    int hasil=1;
    for (int i=0; i < jlh_digit; i++) {
      hasil *= digit;
    }

    // jumlahlah hasil pangkat
    sum += hasil;

    // buat digit terakhir
    n /= 10;
  }

  // bandingkan hasil pengjumlahan pangkat dengan angka yg diinput
  if (sum == input) {
    printf("Hasil penjumlahan pangkat: %d\n", sum);
    printf("%d adalah bilangan armstrong!\n", input);
  } else {
    printf("%d bukan bilangan armstrong!\n", input);
  }

  return 0;
}
