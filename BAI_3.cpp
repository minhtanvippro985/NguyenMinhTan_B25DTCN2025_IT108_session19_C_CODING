#include<stdio.h>

void countEvenOdd(int *array, int size, int *chan, int *le) {
    *chan = 0;
    *le = 0;

    for (int i = 0; i < size; i++) {
        if (*(array + i) % 2 == 0) {
            (*chan)++;
        } else {
            (*le)++;
        }
    }
}

float averagecalc(int *arraytemp, int size) {
    int sumcalc = 0;

    for (int i = 0; i < size; i++) {
        sumcalc += *(arraytemp + i);   // pointer
    }

    return (float)sumcalc / size;   // avg
}
int main(){
	int size ;
	printf("size cua phan tu ?? : ");
	scanf("%d" , &size );
	int arraytemplate[size];
	
	
	for (int i = 0 ; i < size ; i++){
		printf("array %d = ",i );
		scanf("%d",&arraytemplate[i]);
		
	}
    int even , odd;
    printf("\ntrung binh cua mang la: %.2f\n", averagecalc(arraytemplate , size));
   // countEvenOdd(arraytemplate, size, &even, &odd);
    //printf("\n phan tu chan: %d", even);
    //printf("\n phan tu le : %d\n", odd);
    
}