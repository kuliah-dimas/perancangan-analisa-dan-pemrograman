#include <stdio.h>

void prima();
void bsort();
void faktor();

int main() {
    int x;
    while (1) {
        printf("\n \t Algoritma Brute Force \n");
        printf(" ========================================== ");
        printf("\n 1. Pencarian Bilangan Prima");
        printf("\n 2. Sorting Bilangan");
        printf("\n 3. Pencarian Bilangan Faktor");
        printf("\n 4. Exit ");
        printf("\n ========================================== \n");
        printf("\n Masukkan Pilihan (1-4): ");
        scanf("%d", &x);
        switch (x) {
            case 1:
                prima();
                break;
            case 2:
                bsort();
                break;
            case 3:
                faktor();
                break;
            case 4:
                return 0;
            default:
                printf("Anda Salah memasukkan Input!! \n\n");
                printf("Program Akan Direstart Setelah Anda Menekan Tombol Enter\n");
                getchar();
                break;
        }
    }
    return 0;
}

void prima() {
    int bil, j, k;
    printf("----Pencarian Bilangan Prima----- \n\n");
    printf("Masukkan Batas Bilangan: ");
    scanf("%d", &bil);
    printf("Bilangan Prima: ");
    for (j = 2; j <= bil; j++) {
        int is_prime = 1;
        for (k = 2; k < j; k++) {
            if (j % k == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", j);
        }
    }
    printf("\n");
}

void bsort() {
    int i, j, temp, n;
    printf("----Sorting Bilangan---- \n\n");
    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &n);
    int bil[100];
    for (i = 0; i < n; i++) {
        printf("Bilangan ke-%d \t: ", i + 1);
        scanf("%d", &bil[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (bil[j] > bil[j + 1]) {
                temp = bil[j];
                bil[j] = bil[j + 1];
                bil[j + 1] = temp;
            }
        }
    }
    printf("Sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d", bil[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void faktor() {
    int n, i;
    printf("----Pencarian Faktor Bilangan---- \n\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);
    printf("Faktor dari %d adalah: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
