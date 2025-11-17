#include <stdio.h>
#include <stdlib.h>

void showmenu() {
    printf("+--------------------MENU---------------------+\n");
    printf("|1. Nhap so phan tu va tung phan tu           |\n");
    printf("|2. Hien thi cac phan tu trong mang           |\n");
    printf("|3. Tinh do dai mang                          |\n");
    printf("|4. Tinh tong cac phan tu                     |\n");
    printf("|5. Hien thi phan tu lon nhat                 |\n");
    printf("|6. Thoat                                     |\n");
    printf("+---------------------------------------------+\n");
    printf("Chon chuc nang: ");
}

void hienThiCacMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu %d = %d\n", i, *(arr + i));
    }
}

void dodaimang(int *arr, int size) {
    printf("\nCo %d phan tu trong mang.\n", size);
}

int tongMang(int *arr, int size) {
    int tong = 0;
    for (int i = 0; i < size; i++) {
        tong += *(arr + i);
    }
    return tong;
}

int maxMang(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int *arr = NULL;
    int size = 0;
    int choice;
    int danhap = 0;

    do {
        showmenu();
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            printf("Nhap so phan tu: ");
            scanf("%d", &size);

            // malloc usage
            arr = (int*) malloc(size * sizeof(int));

            for (int i = 0; i < size; i++) {
                printf("Nhap phan tu %d: ", i);
                scanf("%d", (arr + i));   // pointer
            }

            danhap = 1;
            break;
        }

        case 2: {
            if (!danhap) {
                printf("Ban chua nhap mang!\n");
            } else {
                hienThiCacMang(arr, size);
            }
            break;
        }

        case 3: {
            if (!danhap) {
                printf("Ban chua nhap mang!\n");
            } else {
                dodaimang(arr, size);
            }
            break;
        }

        case 4: {
            if (!danhap) {
                printf("Ban chua nhap mang!\n");
            } else {
                int tong = tongMang(arr, size);
                printf("Tong cac phan tu trong mang: %d\n", tong);
            }
            break;
        }

        case 5: {
            if (!danhap) {
                printf("Ban chua nhap mang!\n");
            } else {
                int m = maxMang(arr, size);
                printf("Phan tu lon nhat: %d\n", m);
            }
            break;
        }
        case 6 : 
           printf("dang thoat....");
           

        }

    } while (choice != 6);

   

    return 0;
}
