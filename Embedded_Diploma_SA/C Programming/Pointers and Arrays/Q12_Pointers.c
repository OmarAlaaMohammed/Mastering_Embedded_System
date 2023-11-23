#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*12. Write a function which count the max number 
 of consecutive elements in an array of 12 element:
   x[10] = {1, 1, 1, 5, 5, 5, 3, 3, 5, 5, 5, 5} 
 and the user enter 5 then the output will be 4*/

	//Functions Prototype//

void consecutive(uint8*, uint8);

int main(){
	uint8 Array_Of_Numbers[] = {1,3,3,3,2,3,5,5,5,5,2,2};
	uint8 Size_Of_Array = sizeof(Array_Of_Numbers)/sizeof(Array_Of_Numbers[0]);
	uint8 i;

	printf("Size of Array = %d\n",Size_Of_Array);

	for(i = 0; i < Size_Of_Array; i++){
		printf("%d ",Array_Of_Numbers[i]);
	}

	consecutive(Array_Of_Numbers, Size_Of_Array);
}


void consecutive(uint8* Array, uint8 Len){
	uint8 i,j,Cons = 0,Max = 0,Num;
	for(i = 0; i < Len; i++){
		for(j = 0; j < Len; j++){
			if(Array[i] == Array[j]){
				Cons++;
				if(Max < Cons){
					Max = Cons;
					Num = Array[i];
				}
			}
			else{
				Cons = 0;
			}
		}
	}

	printf("\nThe num %d is repeated consecutively %d times",Num,Max);
}


/*
void consecutive(uint8* Array, uint8 Len){
	uint8 i,Cons = 0,Max = 0,Num;
	
	printf("\nEnter the number you want to check its consecutively:\n");
	scanf("%d",&Num);

	for(i = 0; i < Len; i++){
			if(Array[i] == Num){
				Cons++;
				if(Max < Cons){
					Max = Cons;
				}
			}
			else{
				Cons = 0;
			}
	}

	printf("The num %d is repeated consecutively %d times",Num,Max);
}
*/