#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void showMenu() {
    printf("\n=========== MENU ===========\n");
    printf("1. Nhap so phan tu va tung phan tu\n");
    printf("2. In ra cac phan tu chan\n");
    printf("3. In ra cac phan tu nguyen to\n");
    printf("4. Dao nguoc mang\n");
    printf("5. Sap xep mang\n");
    printf("   1. Tang dan\n");
    printf("   2. Giam dan\n");
    printf("6. Tim kiem phan tu trong mang\n");
    printf("7. Thoat\n");
    printf("Nhap lua chon: ");
}

// prime checker
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// even numb
void printEven(int *arr, int n) {
    printf("Cac phan tu chan: ");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            printf("%d ", *(arr + i));
    }
    printf("\n");
}

// prime num
void printPrime(int *arr, int n) {
    printf("Cac phan tu nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(*(arr + i)))
            printf("%d ", *(arr + i));
    }
    printf("\n");
}

// reversal
void reverseArray(int *arr, int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = *(arr + left);
        *(arr + left) = *(arr + right);
        *(arr + right) = temp;
        left++;
        right--;
    }
    printf("Da dao nguoc mang!\n");
}

// ascending
void sortAsc(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int tmp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = tmp;
            }
        }
    }
    printf("Da sap xep tang dan!\n");
}

// giam
void sortDesc(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (*(arr + i) < *(arr + j)) {
                int tmp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = tmp;
            }
        }
    }
    printf("Da sap xep giam dan!\n");
}

void searchElement(int *arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            printf("Tim thay %d tai vi tri %d\n", x, i);
            return;
        }
    }
    printf("Khong tim thay %d trong mang!\n", x);
}

int main() {
    int *arr = NULL;
    int n = 0;
    int choice;
    int hasInput = 0;

    do {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Nhap so phan tu: ");
            scanf("%d", &n);

            arr = (int*) malloc(n * sizeof(int));

            for (int i = 0; i < n; i++) {
                printf("Nhap arr[%d]: ", i);
                scanf("%d", arr + i);
            }
            hasInput = 1;
            break;

        case 2:
            if (!hasInput) printf("CHUA NHAP!!!\n");
            else printEven(arr, n);
            break;

        case 3:
            if (!hasInput) printf("CHUA NHAP...\n");
            else printPrime(arr, n);
            break;

        case 4:
            if (!hasInput) printf("NHAP CHUA!!!\n");
            else reverseArray(arr, n);
            break;

        case 5:
            if (!hasInput) printf("chua nhap.....\n");
            else {
                int type;
                printf("1. tang dan\n2. giam dan\nnhap lua chon: ");
                scanf("%d", &type);

                if (type == 1) sortAsc(arr, n);
                else if (type == 2) sortDesc(arr, n);
                else printf("khong hop le!\n");
            }
            break;

        case 6:
            if (!hasInput) printf("NHAP MANG CHUA!!!!\n");
            else {
                int x;
                printf("nhap phan tu can tim: ");
                scanf("%d", &x);
                searchElement(arr, n, x);
            }
            break;

        case 7:
            printf("thoat chuong trinh!\n");
            break;

        default:
            printf("lua chon khong hop le!\n");
        }

    } while (choice != 7);

    return 0;
}
