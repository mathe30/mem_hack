#include <stdio.h>
#include "../tools/tools.h"
#include "../routines/routines.h"

int cloop(void* hackable_value) {

	char rejected[] = {
	'\n',
	'\r',
	'\0'
	};
	
	char c;
	// int first_use = 1;

	// if (first_use == 1) {update_routine(hackable_value);}

	update_routine(hackable_value);

	while ((c = getchar()) != EOF) {
	if (check(c,rejected)){
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
			case 'c':
				change_value();
				break;
			default:
			        default_routine();
				break;

		}

	}

	}
}
