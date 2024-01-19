#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long  		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long  		int32;
typedef signed long long    int64;

//Ex2 Find the Length of a string//

int main(){
	uint8 arr[100],length;
	printf("Enter a string:");
	gets(arr);
	for(uint8 i = 0; arr[i] != '\0'; i++){
		length++;
	} 

	printf("Length = %d",length);

	return 0;
}