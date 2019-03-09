#include <stdio.h>
#include "print_ext.h"

int externed_var = 10;

int main(int arg, char** argc){
	printf("[*] main method is calling the function print_ext() from print_ext.c..");
	print_ext();
	return 0;
}
