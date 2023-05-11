#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "stack.h"
#include "fsm.h"
#include "boolean.h"
#include "utill.h"


boolean fsm(char my_string[]){
	stack top;
	char op_del, delim;
	int i=-1;
	int next_state=0;
	init_stack(&top);

 while (1){
  	switch(next_state){
  		case 0: i++;
 			if (is_open(my_string[i]))
  				next_state=1;
			 
			else if (is_close(my_string[i])) 
   				next_state=2;
  					
 			else if (my_string[i] == '\0') 
  				next_state=3;
						 
 			else
   				next_state=4;
						
			break;


  		case 1: if (!is_full()){
				push(&top, my_string[i]);
				next_state=0;
			}
			else {
				printf("Error! stack is Full\n");
				exit (0);
			}

 			break;

 		case 2: if(!is_empty(top)){
 				op_del = pop (&top);
 				if (!is_brother(op_del, my_string[i])){
 					if (op_del =='('){
 					delim = ')';
				 	printf("Error! found %c expecting %c.\n", my_string[i], delim);
					}
					if (op_del =='{'){
 					delim = '}';
 					printf("Error! found %c expecting %c.\n", my_string[i],delim);
 					}
 					if (op_del =='['){
 					delim = ']';
					printf("Error! found %c expecting %c.\n", my_string[i],delim);
					}
 					return FALSE;
					}
 					else
					next_state=0;
			}
			 else{
				printf("Error! No Open Delimeter to compare to.\n");
				return FALSE;
			}
			 break;


 		case 3: if(is_empty(top)){
  					return TRUE;
				 }
				 else{
 				 	printf("Error! Open delimiters left.\n");
   				 return FALSE;
				 }
			break;

		case 4: next_state=0;
			break;
		}
	}
}
		
