#include <stdio.h>

typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned long       uint32;
typedef unsigned long long  uint64;

typedef signed char         int8;
typedef signed short        int16;
typedef signed long         int32;
typedef signed long long    int64;

int main()
{
    uint16 prime,count,i;

    for(prime = 1; prime <=100 ;prime++){ //Increments the number to check each number from 1 to 100//
        count = 0;                        //Setting the counter to 0 after incrementing the number getting checked//
        for(i = 1; i <= prime; i++){      //Checking the remainder of the prime over the i which increments from 1 to the current checked number//
            if((prime % i) == 0){         //if the number remainder is 0 that means its divisible by i,adds 1 to the counter //
            count++;
            }
        }
    if(count == 2){
        /*because prime numbers are only divisible on 1 and its own,
        if the counter is more than 2 means its not a prime number*/
        printf("%hi is a prime number!\n",prime);
    }
    }
}
