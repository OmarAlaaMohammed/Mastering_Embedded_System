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

	uint16 i,num;

	printf("Enter a number\n\n"); 
	scanf("%hi",&num);			//User enters a number//

	for(i=1;(i*i)<=num;i++){	//Incrementing i until (i*i) >= the entered number//
		if((i*i) == num){
			printf("%hi -> Perfect Square (%hi)\n\n",num,i);
			break;
		}
	}
	if(!((i*i) == num)){
		printf("Not Perfect Square\n\n");
	}
}



