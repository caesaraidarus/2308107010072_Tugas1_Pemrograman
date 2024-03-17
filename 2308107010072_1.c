#include <stdio.h>
//caesar tugas 1
int main() {
  int pilihan, bilangan, hasil, sisa, i;

  do {
      printf("Pilih jenis konversi:\n");
      printf("1. Desimal ke Biner\n");
      printf("2. Biner ke Desimal\n");
      printf("3. Desimal ke Oktal\n");
      printf("4. Oktal ke Desimal\n");
      printf("Pilihan Anda: ");
      scanf("%d", &pilihan);

    if (pilihan < 1 || pilihan > 4)
      printf("Pilihan tidak valid. Silakan masukkan angka antara 1 hingga 4.\n");

  } while (pilihan < 1 || pilihan > 4);

  switch (pilihan) {
    case 1:
      printf("Masukkan bilangan desimal: ");
      scanf("%d", &bilangan);
      hasil = 0;
      i = 1;
      while (bilangan > 0) {
        sisa = bilangan % 2;
        hasil = hasil + sisa * i;
        i *= 10;
        bilangan /= 2;
      }
      printf("Bilangan biner: %d\n", hasil);
      break;
    case 2:
      printf("Masukkan bilangan biner: ");
      scanf("%d", &bilangan);
      hasil = 0;
      i = 1;
      while (bilangan > 0) {
        sisa = bilangan % 10;
        hasil = hasil + sisa * i;
        i *= 2;
        bilangan /= 10;
      }
      printf("Bilangan desimal: %d\n", hasil);
      break;
    case 3:
      printf("Masukkan bilangan desimal: ");
      scanf("%d", &bilangan);
      hasil = 0;
      i = 1;
      while (bilangan > 0) {
        sisa = bilangan % 8;
        hasil = hasil + sisa * i;
        i *= 10;
        bilangan /= 8;
      }
      printf("Bilangan oktal: %d\n", hasil);
      break;
    case 4:
      printf("Masukkan bilangan oktal: ");
      scanf("%d", &bilangan);
      hasil = 0;
      i = 1;
      while (bilangan > 0) {
        sisa = bilangan % 10;
        hasil = hasil + sisa * i;
        i *= 8;
        bilangan /= 10;
      }
      printf("Bilangan desimal: %d\n", hasil);
      break;
  }

  return 0;
}