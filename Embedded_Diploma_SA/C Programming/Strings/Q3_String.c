#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

// 3.Write a C function which swap two strings. //

    //Function Prototype//

void swap(uint8**, uint8**);

    //-------------------//

int main()
{
    uint8 *str1 = "Omar";                              //Pointer 1 that points at the string 1//
    uint8 *str2 = "Alaa";                              //Pointer 2 that points at the string 2//
    printf("Before Swapping %s,%s\n", str1, str2);     //Displaying the two strings before swapping// 
    swap(&str1, &str2);                                //Calling the function 'swap' and passing the two adresses of the two strings//
    printf("After Swapping  %s,%s\n", str1, str2);     //Displaying the two strings after swapping// 
}

void swap(uint8** ptr1, uint8** ptr2)
{
    uint8 * temp = *ptr1;                              //Swappping process//
    *ptr1 = *ptr2;
    *ptr2 = temp;
}