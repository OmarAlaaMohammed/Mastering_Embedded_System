#include <stdio.h>

void clearBit(int, int);

int main(){

    int x,bitt;
    printf("Input Number = ");
    scanf("%d",&x);

    printf("Bit Position = ");
    scanf("%d",&bitt);

    clearBit(x,bitt);

}

void clearBit(int num, int n){

    num &= ~(1<<n);
    printf("==>\nResult = %d",num);

}
