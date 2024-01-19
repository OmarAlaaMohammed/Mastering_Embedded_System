#include <stdio.h>

int clearBit(int,int);

int main(){
	int num,n;

	printf("Enter a number :");
	scanf("%d",&num);
	printf("Enter the number of bit to be cleared : ");
	scanf("%d",&n);
	num = clearBit(num,n);
	printf("result = %d",num);

}

 
int clearBit(int num,int n){
	num &= ~(1<<n);
	return num;
}