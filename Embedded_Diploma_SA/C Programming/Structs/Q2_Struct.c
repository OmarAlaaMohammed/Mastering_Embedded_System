#include <stdio.h>

typedef unsigned char uint8;
typedef signed char   int8;

struct Time{
	int8 Hours;
	int8 Minutes;
	int8 Seconds;
}Start,End,Difference;

void Difference_Between_Time(struct Time T1,								//Function that calculate the difference between the start time and the stop time//
							 struct Time T2,
							 struct Time *Diff);

int main(){

	printf("Enter the Start Time in Hours,Minutes and Seconds respectively:\n");					//User Enter the start time in hours:minutes:seconds//
	scanf("%d %d %d",&Start.Hours,&Start.Minutes,&Start.Seconds);

	printf("Enter the Stop Time in Hours,Minutes and Seconds respectively:\n");
	scanf("%d %d %d",&End.Hours,&End.Minutes,&End.Seconds);											//User Enter the stop time in hours:minutes:seconds//

	Difference_Between_Time(Start, End, &Difference);												/*Calling the function 'Difference_Between_Time'
																									  and passing 2 structures and an address of a third structure*/

	printf("-------------------------------------------------\n");
	printf("The Start Time is %d:%d:%d\n",Start.Hours,Start.Minutes,Start.Seconds);					/*Printing the Start,Stop and Difference between
																									  the two timings in Hours:Minutes:Seconds*/
	printf("The Stop Time  is %d:%d:%d\n",End.Hours,End.Minutes,End.Seconds);
	printf("The Difference is %d:%d:%d\n",Difference.Hours,Difference.Minutes,Difference.Seconds);
	printf("-------------------------------------------------\n");

}

void Difference_Between_Time(struct Time Start,			//Function that calculate the difference between the start time and the stop time//
							 struct Time Stop,			//*diff is a pointer to structure that points @ the 'Difference' structure address to save the values//
							 struct Time *diff){

	if(Stop.Seconds < Start.Seconds){					//If the Stop time seconds is smaller than the Start time seconds we have to exchange 1 stop minute with 60 stop seconds//	
		Stop.Minutes--;									//EX . Start time = (2:30:05) & Stop Time = (3:20:01) //
		Stop.Seconds += 60;						        //If we calculate the diff = (Stop - Start = 1:-10:-04) it doesn't make sense //
	}													//Exchange both seconds and minutes in the stop time new_stop_time = (2:79:61)//
														//Diff = (2:80:61 - 2:30:05) = (0:49:56)//
	if(Stop.Minutes < Start.Minutes){
		Stop.Hours--;
		Stop.Minutes += 60;
	}

	diff->Seconds = Stop.Seconds - Start.Seconds;		//Accessing the values in the structure Diff using the pointer and (->)//
	diff->Minutes = Stop.Minutes - Start.Minutes;
	diff->Hours   = Stop.Hours   - Start.Hours;
}