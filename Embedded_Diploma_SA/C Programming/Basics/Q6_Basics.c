#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

int main(){
	uint16 num,fac;
	while(1){

	uint32 result=1;
	printf("Enter a number:\n");
	scanf("%hi",&num);

	for(fac = num ; fac>0; fac--){
		result *= fac;
	}
	printf("%hi The factorial = %ld\n",num,result);
}
}
