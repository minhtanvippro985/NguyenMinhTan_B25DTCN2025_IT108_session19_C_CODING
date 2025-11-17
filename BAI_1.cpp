#include<stdio.h>



int maxfinder(int *array , int size){
	int max = *array ;
	int *pointerarr = array;
	
	for (int i = 0 ; i < size ; i ++){
		if (*(pointerarr + i) > max ){
			max = *(pointerarr + i );
		}
	}
	return max ;
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
	printf("phan tu lon nhat trog mang la %d",maxfinder(arraytemplate , size) );
}