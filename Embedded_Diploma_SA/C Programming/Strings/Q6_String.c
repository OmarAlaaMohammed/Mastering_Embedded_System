#include <stdio.h>

typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned long       uint32;
typedef unsigned long long  uint64;

typedef signed char         int8;
typedef signed short        int16;
typedef signed long         int32;
typedef signed long long    int64;

/* 5.Write a C function to compare two strings
 (return 0 if not match and one if matches */

//Function Prototype//

#include <stdio.h>

void reverse(uint8*, uint8);

int main(){
    uint8 String[] = "Omar";
    uint8 Length = sizeof(String)/sizeof(String[0]);
    reverse(String,Length);
    printf("The string is %s\n",String);
}

void reverse(uint8* a, uint8 Len){
    uint8 i;
    uint8 temp;
    uint8 *Begin;
    Begin = a;
    uint8 *End;
    End = a + Len -1;
    for(i = 0; i < (Len - 1)/2 ; i++){
            temp = *End;
            *End = *Begin;
            *Begin = temp;

            End--;
            Begin++;
    }
}
