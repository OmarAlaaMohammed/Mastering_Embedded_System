#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long  		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long  		int32;
typedef signed long long    int64;

//Ex5 Search an element in array//

int main(){
	float a[100],num;
	uint8 N;
	printf("Enter no of elements : ");
	scanf("%d",&N);

	for(int i=0; i<N; i++){
		scanf("%f",&a[i]);
	}

	printf("Enter the number to be searched : ");
	scanf("%f",&num);	

	for(int i=0; i<N; i++){
		if(a[i] == num){
			printf("Number found at the location %f",i+1);
		}
	}
	return 0;
}