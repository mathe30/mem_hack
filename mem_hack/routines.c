#include <stdio.h>
#include "tools.h"
#include "hack.h"

extern int hackable_value;

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


void default_routine(){
	clear();
	puts("undefined key !");
	note();
}

void change_value(){
	clear();
	printf("Default value is %i\nType the new value > ",hackable_value);
	scanf("%i",&hackable_value);
	printf("\nNew value is set to %i ",hackable_value);
	note();

}

int quite_routine(){
	clear();
	puts("Quitting .. ");
	return 0;
}


