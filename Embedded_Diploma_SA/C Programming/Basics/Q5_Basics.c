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
	uint16 num,i;

while(1){
	scanf("%hi",&num);
	uint16 accumlative=1;
	if(num<0){
		printf("Invalid number (Negative Num)\n");
	}

	for(i=1 ; accumlative<=num ;i++){
		accumlative *= 2;
		if(accumlative == num){
			printf("%hi The power is %hi\n",num,i);

			break;
		}
	}
	
	if(!(accumlative == num)){
		printf("Not powered\n");
	}
}
}