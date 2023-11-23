#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*7.Write a C Function that take an array, an int and its size,
	 return 0 if this integer is not found and the index of
			the int in the array if it is found*/

	//Functions Prototype//

uint8 Index(uint8*, uint8, uint8);

	//-------------------//

int main()
{

	uint8 Numbers[] = {15,10,2,8,10,7,9,3};						//Random Numbers in Array//
	uint8 Length = (sizeof(Numbers)/sizeof(Numbers[0]));		//To Get the number of elements in Array//
	int16 Number_To_Find,Returned;
	scanf("%hi",&Number_To_Find);								//User enters the desired number to search for it//
	Returned = Index(Numbers, Number_To_Find, Length);			//Calling the function 'Index' and passing the array, the number to check and the size of it//
	
	if(Returned == 0)											//If the returned is equal to 0 (which means it didn't show up in the array)//
	{
		printf("The number is not found");						//printf("The number is not found")//	
	}
	else														//If the returned is equal to a number (means that the desired number was found in 'i position')//
	{
		printf("The index of the number is %d",Returned-1);
	}
}


uint8 Index(uint8 *p,uint8 num,uint8 Len){
	
	uint8 i;

	for(i = 1; i <=  Len; i++)									//Going through the array and comparing it with the passed value by the user//
	{
		if(num == p[i-1])
		{
			return i;											//If its found then return the position of array 'i'//
		}
	}
	return 0;
}
