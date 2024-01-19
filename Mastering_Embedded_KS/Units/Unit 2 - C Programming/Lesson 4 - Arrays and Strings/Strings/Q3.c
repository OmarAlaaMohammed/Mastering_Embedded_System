#include <stdio.h>
#include <string.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long  		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long  		int32;
typedef signed long long    int64;


//Ex3 Reverse a string without using library function//

int main(){

	uint8 arr[100];
	printf("Enter the string : ");
	gets(arr);
	uint8 length = strlen(arr);

	for(uint8 i = 0; i < length; i++){
		printf("%c",arr[length-i-1]);
	}

}