#include <stdio.h>
#include "../tools/tools.h"
#include "../hack/hack.h"
#include "../tools/colorslib.h"

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
	printf("%s Undefined command recived !, Please check the line below .. %s",COLOR_RED, COLOR_RESET);
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
	return 0;
}


