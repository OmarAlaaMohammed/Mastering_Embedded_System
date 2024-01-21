#include <stdio.h>

int compareUsernames(char*, char*);

int main(){

	char correctUsername[] = "USERNAME";
	char inputUsername[50];

	printf("Enter username: ");
	scanf("%s",inputUsername);

	if(compareUsernames(inputUsername, correctUsername)){
		printf("Correct Username!\n");
	}
	else{
		printf("Incorret Username!\n");
	}

}


int compareUsernames(char inputUsername[], char correctUsername[]){


	while(*inputUsername != '\0' && *correctUsername != '\0'){
		if(*inputUsername != *correctUsername){
			return 0;
		}

		inputUsername++;
		correctUsername++;

	}

	//Check if both strings reached to the null at the same time to consider the (black spaces) " " in both strings

	return (*inputUsername == '\0' && *correctUsername == '\0'); 
} 