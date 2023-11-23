
#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*3.Write a C Function that take an array and its size,
	 then sorting the element descending*/

	//Functions Prototype//

void Arrange(uint8 *, uint8);								
void Print(uint8*,uint8);

	//-------------------//

int main(){
	uint8 Numbers[] = {12,14,5,6,2,8,1,10};                //Random Numbers in Array//
	uint8 Length = (sizeof(Numbers)/sizeof(Numbers[0]));   //To Get the number of elements in Array//
	uint8 i;
	
	printf("Before Arranging: ");
	Print(Numbers,Length);							       //Print the numbers before sorting//	
	Arrange(Numbers,Length);							   //Call Func "Arrange" to sort numbers descending//

	printf("\nAfter Arranging: ");	
	Print(Numbers,Length);								   //Print the numbers after sorting//
}

	//Function to print elements of array "Numbers"//


void Print(uint8* P_Num,uint8 Len){							
	uint8 i;
	for(i = 0; i < Len; i++){
		printf("%d ",P_Num[i]);
	}
}
	//Function to sort elements ascending//

void Arrange(uint8 *P_Num, uint8 Length){						//Takes a pointer *p = Numbers//
	uint8 i,j,temp;
	for(i = 0; i < Length; i++){
		for(j = i + 1; j < Length; j++){
			if(P_Num[i] > P_Num[j]){							//If the number[0] is bigger than number[1] then swap thw two numbers//

			temp = P_Num[i];									//Swapping numbers//
			P_Num[i] = P_Num[j];
			P_Num[j] = temp;

			}
		}
	}
}