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
	uint16 a,b;
    float c,d;
    scanf("%d %d\n%f %f",&a,&b,&c,&d);
    printf("%d %d\n",a+b, a-b);
    printf("%.1f %.1f\n",c+d, c-d);
}
