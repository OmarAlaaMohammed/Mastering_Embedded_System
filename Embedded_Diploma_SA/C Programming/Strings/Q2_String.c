#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

// 2.Write a C function which return the length of strings. //

//Function Prototype//

uint8 Length(uint8* );		


int main(){
	uint8 String[30],Len;		
	uint8* Pstring = String;		//Creating a pointer that points to the 'String's array first address//
	scanf("%s",String);				//User enters a string with a maximum length of 30//
	Len = Length(Pstring);			//Calling the function 'Length' and passing the array as pointer//
	printf("%d",Len);				//Print the returned value from the function that holds the length of the string//
}	

uint8 Length(uint8* Str){		
	uint8 i;
	for(i = 0; Str[i] != '\0';i++){	//Increment i until the string ends with '\0'//

	}
	return i;						//Return i as the length//
}