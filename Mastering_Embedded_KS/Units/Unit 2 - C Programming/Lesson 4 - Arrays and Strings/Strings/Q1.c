#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long  		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long  		int32;
typedef signed long long    int64;

//Ex1 Find the frequency of characters in a string//

int main(){
	uint8_t arr[100],chr,freq=0;
	printf("Enter a string:");
	gets(arr);

	printf("Enter a character to find frequency:");
	scanf("%c",&chr);

	for(int i = 0; arr[i] != '\0'; i++){
		if(arr[i] == chr)
			freq++;
	}

	printf("Frequency of %c = %d",chr,freq);
}