#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/* 5.Write a C function to compare two strings
 (return 0 if not match and one if matches */

    //Function Prototype//

uint8 compare(uint8* ,uint8* );

    //-------------------//

int main(){
    uint8 result;
    uint8 str1[30],str2[30];                            
    printf("Enter the first string:\n");
    gets(str1);                                         //User enters the first string//
    printf("Enter the second string:\n");
    gets(str2);                                         //User enters the second string//                   

    result = compare(str1, str2);                       //Calling the function 'compare' and passing the two strings//

    if(result == 0){                                    //If the returned value = 0 they dont match//
        printf("The two string don't match\n");
    }
    else{                                               //If the returned value = 1 they match//
        printf("The two string match\n");
    }

}

uint8 compare(uint8* a, uint8* b){
    uint8 i,j,flag;                                     
    for(i = 0; (a[i] != '\0') || (b[i] != '\0'); i++){  //Go in a for loop if both strings didn't end or reach the last character '\0'//
        if(a[i] != b[i]){                               //for Ex String1 = Omar and String2 = Ola//
            flag = 1;                                   /*Since String1[1] doesnt match String2[1] trigger the
                                                          variable flag and quit from the for loop*/
            break;
        }
    }
    if(flag == 1){                                      //Return 0 if the flag is triggered which means they don't match//
        return 0;
    }
    else{                                               //Return 1 if the for loop ended by the it's condition//
        return 1;
    }
}