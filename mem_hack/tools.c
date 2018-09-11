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
	printf("\n\n\n(u)pdate, (h)ack, (c)hange, or (q)uite\n> ");
}

int check(char c, char* Rejected){
	int tmp;

	for (int i=0; Rejected[i] != '\0'; i++){
		if (c == Rejected[i]){
			return 0;
		} 
	}

	return 1;
}
