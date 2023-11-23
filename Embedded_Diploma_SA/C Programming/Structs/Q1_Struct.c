#include <stdio.h>

typedef unsigned char 	   uint8;
typedef unsigned short 	   uint16;
typedef unsigned long long uint64;
typedef unsigned long 	   uint32;

typedef char 	   int8;
typedef short 	   int16;
typedef long 	   int32;
typedef long long  int64;

struct Student{														//Declaring a structure that contains student details/members//
		uint8 Name[30];
		uint16 Student_Number;
		uint16 ID;
		uint16 Age;
		uint16 Mark;
	};

int main(){

	struct Student s[5];											//Creating 5 objects of structure 'Student'//

	uint8 i;

	printf("***Storing the data***\n");

	for(i = 0; i < 5; i++){											//User enters the data of each student//
		s[i].Student_Number = i + 1;
		printf("Enter student %d First Name:\n",s[i].Student_Number);
		scanf("%s",s[i].Name);
		printf("Enter student %d ID:\n",s[i].Student_Number);
		scanf("%hi",&s[i].ID);
		printf("Enter student %d Age:\n",s[i].Student_Number);
		scanf("%hi",&s[i].Age);
		printf("Enter student %d Mark:\n",s[i].Student_Number);
		scanf("%hi",&s[i].Mark);

		printf("\n\n");

	}

	printf("***Displaying the data***\n")

	for(i = 0; i < 5; i++){											//Printing each member in each object created//

		printf("Student Number %d:\n\n",s[i].Student_Number);
		printf("Student First Name : %s\n",s[i].Name);
		printf("Student ID   	   : %d\n",s[i].ID);
		printf("Student Age        : %d\n",s[i].Age);
		printf("Student Mark       : %d\n",s[i].Mark);
		printf("---------------------\n\n");

	}
}