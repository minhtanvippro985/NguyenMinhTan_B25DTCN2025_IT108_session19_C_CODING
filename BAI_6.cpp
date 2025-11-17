#include <stdio.h>

int compareArrays(int *array1, int *array2, int size) {
    for (int i = 0; i < size; i++) {
        if (*(array1 + i) != *(array2 + i)) {   
            return 0;              
        }
    }
    return 1; 
}
void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);   // sao chep bang pointer 
        // destination
    }
}
int main() {
    int sizer;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &sizer);

    int arr1[sizer], arr2[sizer];

    // 1
    printf("\nmang 1:\n");
    for (int i = 0; i < sizer; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
     copyArray(arr1, arr2, sizer);
      printf("\nmang 2 sau khi sao chep:\n");
    for (int i = 0; i < sizer; i++) {
        printf("array2 [%d] = %d\n", i, arr2[i]);
    }
  //  printf("\nmang 2:\n");
   // for (int i = 0; i < sizer; i++) {
     //   printf("arr2[%d] = ", i);
       // scanf("%d", &arr2[i]);
    //}

   // int result = compareArrays(arr1, arr2, sizer);

  //  if (result == 1)
   //     printf("\nhai mang giong nhau.\n");
    //else
      //  printf("\nhai mang khac nhau.\n");

    return 0;
}