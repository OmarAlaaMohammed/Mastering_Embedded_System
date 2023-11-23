#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

int main()
{
	uint16 i,j;

	for(i = 0; i<=16 ;i++){		    			//Incrementing the rows//
		for(j = 0; j<21; j++){	    			//Incrementing the columns//
			if(i < 2){			    			// First two lines of the heart//

				if((j >= 2 - i) && (j <= 8+i)){
					printf("* ");
				}
				else if ((j >= 12 - i) && (j <= 18+i)){
					printf("* ");
				}
				else{			    			//To print the gap//
					printf("  ");
				}
			}

			if(i>=2 && i<=3){ 					// Third and Fourth lines because they're the same//
				printf("* ");
			}

			if(i>=4 && i<=15){					// The rest of the shape is more like an upside down pyramid//

				if((j >= i-4) && (j < 25-i)){	//it starts from row #4 to row #15//
					printf("* ");
				}
				else{
					printf("  ");
				}
			}
		}
	printf("\n");
	}
}
