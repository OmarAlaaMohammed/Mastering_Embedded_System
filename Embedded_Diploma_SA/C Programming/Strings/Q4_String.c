#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

// 4. Write a C function to concatenate two strings. //

    //Function Prototype//

void concatenate(uint8* ,uint8* );

    //-------------------//

int main(){
    uint8 str1[30],str2[30];                        
    printf("Enter the first string:\n");
    gets(str1);                                      //User Enters the first string with max 30 characters//
    printf("Enter the second string:\n");
    gets(str2);                                      //User Enters the second string with max 30 characters//   
    uint8* ps1 = str1;                               //Create a pointer that points at the first char in the first string//
    uint8* ps2 = str2;                               //Create a pointer that points at the first char in the second string//

    concatenate(ps1, ps2);                           //Calling function 'concatenate' and passing the two pointers//

    printf("The concatenated word is = %s",str1);    //Print the final string (Concatenated string)//
}

void concatenate(uint8* a, uint8* b){
    uint8 i,j;
    while(a[i] != '\0')         //Increment the i until the string ends with '\0' to start overwriting//                
        i++;    
    while(b[j] != '\0'){        //After we reached a[i] = '\0' we start to increment the j in the second string//
        a[i] = b[j];            //Copying string 2 in the end of string 1//
        i++;
        j++;
    }
    a[i] = '\0';                //End the concatenated string with '\0'//
}