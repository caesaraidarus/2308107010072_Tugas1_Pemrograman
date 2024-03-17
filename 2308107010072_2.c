#include <stdio.h>

int main() {
    int year;

    do {
        printf("Masukkan tahun: ");
        scanf("%d", &year);

        if (year < 1000 || year > 9999) {
            printf("Tahun harus terdiri dari 4 digit.\n");
        } else if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Tahun %d adalah tahun kabisat.\n", year);
            } else {
                printf("Tahun %d bukan tahun kabisat.\n", year);
            }
        } else if (year % 4 == 0) {
            printf("Tahun %d adalah tahun kabisat.\n", year);
        } else {
            printf("Tahun %d bukan tahun kabisat.\n", year);
        }
    } while (year < 1000 || year > 9999);

    return 0;
}