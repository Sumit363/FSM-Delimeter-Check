#include <stdio.h>
#include <string.h>
#include "boolean.h"
#include "utill.h"

boolean is_open(char c){
  	return ((c=='(')||(c=='{')||(c=='['));
 	}

boolean is_close(char c) {
  	return ((c==')')||(c=='}')||(c==']'));
	 }


boolean is_brother(char op_del, char cl_del){
	if ((op_del=='(') && (cl_del==')')){
	return TRUE;
	}
	else if((op_del=='{') && (cl_del=='}')){
	return TRUE;
	}
	else if ((op_del=='[') && (cl_del==']')){
	return TRUE;
	}
	else
	return FALSE;
	}
