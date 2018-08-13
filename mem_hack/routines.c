#include <stdio.h>
#include "tools.h"
#include "hack.h"

void update_routine(int* hackable_value){
	clear();
	update(hackable_value);
	note();
}

void hack_routine(int* hackable_value){
	clear();
	hack(hackable_value);
	note();
}

int quite_routine(){
	clear();
	puts("Quitting .. ");
	return 0;
}

void default_routine(){
	clear();
	puts("undefined key !");
	note();
}
