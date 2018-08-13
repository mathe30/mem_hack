#include <stdio.h>
#include "routines.h"

int cloop(void* hackable_value) {

	char c;
	int first_use = 1;

	if (first_use == 1) {update_routine(hackable_value);}
	while ((c = getchar()) != EOF) {
	if (c != '\n'){
		switch(c){
			case 'u':
				update_routine(hackable_value);
				break;
			case 'q':
				return quite_routine();
				break;
			case 'h':
				hack_routine(hackable_value);
				break;
			default:
			        default_routine();
				break;

		}

	}

	}
}
