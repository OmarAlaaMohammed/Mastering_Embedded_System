#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

int main()
{
	uint32 num;
    uint16 i,sum=0;
    scanf("%ld",&num);

    for(i = 0; i < 5; i++){

        sum += num % 10;
        num = num / 10;
    }
    printf("%hi",sum);
}
