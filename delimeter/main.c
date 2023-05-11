#include <stdio.h>
#include <string.h>
#include "fsm.h"

/*
		Name: Sumit Basnet
		Course: Data Structure
		Assignment: FSM delimeter check
		Input: stdin
		Output: stdout
*/



int main (void){
	char my_string[100];
	int i=0;
	printf("Enter a string: ");
	gets(my_string);
		if(fsm(my_string)){
			printf("All matched correctly.\n");
		}
	return 0;
}

