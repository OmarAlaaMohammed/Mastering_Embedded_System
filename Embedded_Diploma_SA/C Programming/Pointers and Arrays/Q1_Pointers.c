#include <stdio.h>

typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned long       uint32;
typedef unsigned long long  uint64;

typedef signed char         int8;
typedef signed short        int16;
typedef signed long         int32;
typedef signed long long    int64;

// 1. Write four ways to swap the value of two integer numbers //

int main(){

    uint32 Num = 0x665544332211;    
    uint8* PNum = &Num;                 //A pointer that holds the address of the array 'num'//

    if(PNum[0] < PNum[1]){
        printf("Little Endian");        //if the first byte = 11 which is < 22 then it is little endian//
    }
    else{
        printf("Big Endian");           //if the first byte = 66 which is > 55 then it is big endian//
    }
}