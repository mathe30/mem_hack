#include <stdio.h>
#include "colorslib.h"

void writeMemData(void* address, int data){
	int* ptr = (int*)address;
	printf("\n[*]Hacking .. \n\twriting %i to address %p\n",data ,address);
	*ptr = data;
	if (*ptr == data){
		printf("\n[+]Hacking succeeded, reading the data ..\n");
		printf("\n[%s*%s]reading the data from the specified address .. \n\taddress: %p\n\tdata: %i\n",COLOR_GREEN,COLOR_RESET,address, *(int*)address);
	}else if (*ptr != data){
		printf("[%s-%s]Hacking faild, mostly didn't have the permission to write to the specified address !",COLOR_RED,COLOR_RESET);
	}
	else {
		printf("[%s-%s]some sort of odd error happened !",COLOR_RED,COLOR_RESET);
	}

}

void hack(int* hackable_value){
	void* address;
	int data;
	printf("\n=========================Data entrance=========================\n");
	printf("note: the current hackable variable address is %p , wanna use it .. just copy it :)\n\n", hackable_value);
	printf("address: ");
	scanf("%p", &address);

	printf("value: ");
	scanf("%i", &data);
       	writeMemData(address,data);
}
