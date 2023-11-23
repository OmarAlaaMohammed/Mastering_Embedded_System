#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*11. Write a C Function that take an array and its size, 
and return the most occurrence element in the array e.g:
x[] = {1,2,3,8,6,5,3,9,3,4,3,7,2} the OUTPUT will be 3*/

	//Functions Prototype//

uint8 Occurance(uint8*, uint8);

	//-------------------//

int main(){

	uint8 Numbers[] = {1,2,2,3,2,4,1,5,8,2};						//Group of numbers//
	uint8 Length = (sizeof(Numbers)/sizeof(Numbers[0]));			//The total number of elements in the array//
	uint8 i;

	for(i = 0; i < Length; i++){
		printf("%d ",Numbers[i]);									//Print the array//

	}

	/*Most_Occurance_Element = Occurance(Numbers, Length);			/*Call the function 'Occurance' and passing the array 
															 	 	 and it's size and the new array size*/

	printf("\nIt was repeated %d times.",Occurance(Numbers, Length));	//Print the returned value//


}

uint8 Occurance(uint8* Nums, uint8 Len){

	uint8 i,j,Max_Repetition = 0,Repetition = 0,Num;

	for(i = 0; i < Len; i++){						//Increment element by element//
		Repetition = 0;								//Reset the the repetition number to check the next element in the array//
		for(j = 0; j < Len; j++){					//Increment through all elements while pointing on a specific element using the i//	

			if(Nums[i] == Nums[j]){					/*If the number occurred while going through the rest of the elements, 
													  thats why i used (i != j) then increment 'repeat'*/
				Repetition++;
			}

			if(Max_Repetition < Repetition){		//Store the repetition number if its less than the max//
				Max_Repetition = Repetition;
				Num = Nums[i];	
			}
		}
	}

	printf("\nThe most occurred number = %d",Num);

	return Max_Repetition;							//Return the maximum repetition number//
}

