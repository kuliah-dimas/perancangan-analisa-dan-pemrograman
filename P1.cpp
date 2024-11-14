#include <stdio.h>
#define SIZE 99

void sort(int[], int);

int main() {
    int x[SIZE], i, uang, n, hasil[SIZE];
    int jumlah = 0; 

    printf("Banyak Koin: ");
    scanf("%d", &n);

    printf("Masukan Jenis Koin: \n");
    for (i = 0; i < n; i++) {  
        scanf("%d", &x[i]); 
    }

    sort(x, n);

    printf("Koin yang tersedia:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", x[i]);
    }

    printf("Masukan Nilai yang dipecah: ");
    scanf("%d", &uang);
    printf("\n");

    for (i = 0; i < n; i++) {
        hasil[i] = uang / x[i]; 
        uang = uang % x[i];     
    }

    printf("Keping Koin:\n");
    for (i = 0; i < n; i++) {
        printf("Keping %d -an sebanyak: %d\n", x[i], hasil[i]);
        jumlah += hasil[i]; 
    }

    printf("Sisanya adalah %d\n", uang);
    printf("Jumlah koin minimum adalah %d\n", jumlah);
    
    return 0;
}

void sort(int a[], int siz) {
    int pass, hold, j;
    for (pass = 0; pass < siz - 1; pass++) { 
        for (j = 0; j < siz - 1 - pass; j++) {  
            if (a[j] < a[j + 1]) { 
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}