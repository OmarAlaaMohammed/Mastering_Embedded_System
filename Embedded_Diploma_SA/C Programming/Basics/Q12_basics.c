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
	
	uint16 i,j,incr=1,space=4;

   //THE FIRST PART OF THE PATTERN//

	for(j=0;j<5;j++){                 //Incrementing the rows//
		for(i=0 ;i<space ;i++){       //Printing the spaces starting with 4 double spaces// 
			printf("  ");
		}
		for(i=0 ;i<(2*incr-1) ;i++){  //Incrementing the columns and printing stars with the sequence (2*num -1)//
			printf("* ");
		}
	printf("\n");
	incr++;
	space--;
	}
	
   //THE SECOND PART OF THE PATTERN//

	for(i=0 ;i<3 ;i++){ 
		printf("* * *       * * *\n");
	}
}
