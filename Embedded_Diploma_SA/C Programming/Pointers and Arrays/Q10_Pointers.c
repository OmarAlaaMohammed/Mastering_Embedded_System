#include <stdio.h>

typedef unsigned char 		  uint8;
typedef unsigned short 		  uint16;
typedef unsigned long 		  uint32;
typedef unsigned long long    uint64;

typedef signed char 		  int8;
typedef signed short 		  int16;
typedef signed long 		  int32;
typedef signed long long      int64;

/*10. Write a C Function that take an array, its size and int* size of the new array,
 then remove the repeated value and return an array with no repeated values.*/

	//Functions Prototype//

uint8 * Filtering(uint8*, uint8, uint8*);

	//-------------------//

int main(){

	int8 numbers[] = {0,19,4,2,15,2,7,2,3};					//Group of numbers//
	uint8 length = (sizeof(numbers)/sizeof(numbers[0]));		//The total number of elements in the array//
	uint8 i,Size_Of_New_Array = 0;
	uint8* Array_After_Filtering;							//Declaring the new array//
	uint8* pNew = &Size_Of_New_Array;						//Pointer to the size of the new array//

		//Print the array before filtering//

	printf("\nThe old array size = %d\n",length);
	for(i = 0; i < length; i++){
		printf("%d ",numbers[i]);
	}

		//Call the function 'Filtering' and passing the array and it's size and the new array size//

	Array_After_Filtering = Filtering(numbers, length, pNew);			
	printf("\nThe new array size = %d\n",*pNew);

		//Print the array after filtering//

	for(i = 0; i < Size_Of_New_Array; i++){		
		printf("%d ",Array_After_Filtering[i]);
	}
}

uint8 * Filtering(uint8* nums, uint8 len, uint8* new_size){
	
	static int8 array[10] = {0};
	uint8 i,j,flag=0;
	for(i = 0; i < len; i++){
		flag = 0;
		for(j = 0; j < *new_size; j++){
			if(nums[i] == array[j]){
				flag = 1;
				break;
			}
		}
		//If flag = 1 don't store the element because it already exists once//

		//If flag = 0 store the element because it already exists once//

		if(flag == 0){
			array[*new_size] = nums[i];
			(*new_size)++;
		}
	}
	

	return array;
}

