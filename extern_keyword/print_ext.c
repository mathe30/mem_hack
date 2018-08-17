#include <stdio.h>

extern int externed_var;

void print_ext(){
	printf("done\n[*] print_ext method is running ..\n");
	printf("[+] Externalized value is: %i\n",externed_var);
}
