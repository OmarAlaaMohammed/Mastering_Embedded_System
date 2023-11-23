#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

// 1. Write a C Function that converts any letter from lowercase to uppercase. //

int main(){
	uint8 arr[20]; 								//Create Array 20 Bytes//
	uint8 i;
	scanf("%s",arr);							//User Enters a Word less than 20 letters//

	for(i = 0 ; arr[i] != '\0' ; i++){			//Check letter by letter if its lowercase or not//
		if(arr[i] >= 'a' && arr[i] <= 'z'){		//If its between the ASCII 'a' and 'z' (Lowercase)//
			arr[i] -= 'a' - 'A';				//Subtract a decimal value of ('a' - 'A') = 32//
		}
	}
	printf("%s\n",arr);							//Print the word after converting every lowercase letter to a uppercase//
}
