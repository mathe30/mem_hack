#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char buff1[16];
	char buff2[16] = "overwriteme";
	strcpy(buff1, "12345678901234567890");
	printf("buff1 value: %s\n", buff1);
	printf("buff2 value: %s\n", buff2);
	printf("buff1 address: %p\n",(void*)buff1);
	printf("buff2 address: %p\n", (void*)buff2);
	return 0;
}
