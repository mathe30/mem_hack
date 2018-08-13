#include <stdio.h>
#include <stdlib.h>
#include "tools.h"
#include "routines.h"
#include "hack.h"
#include "cloop.h"
int hackable_value = 12124;
int main(void){
	return cloop(&hackable_value);
}
