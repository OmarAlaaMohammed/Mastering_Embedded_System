#include <stdio.h>

void reverseArray(int*, int);

int main(){

	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int arr[size];

	printf("Enter %d elements:\n", size);

	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}

	reverseArray(arr, size);

	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}

}

void reverseArray(int* array, int size){
	int temp;
	int start = 0;
	int end = size - 1;

	while (start < end){
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;

		start++;
		end--;
	}
}
