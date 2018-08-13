#include <stdio.h>
#include <stdlib.h>

void clear(){
	system("clear");
}

void update(int* hackable_val ){
	printf("current variable value: %i\ncurrent variable address: %p\n"
			                   ,*hackable_val,hackable_val);
}

void note(){
	puts("\n\n\nPress (u) to update values, (h) to hack, or (q) to quite ..");
}
