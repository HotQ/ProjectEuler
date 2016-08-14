#include <stdio.h>
#include <stdlib.h>

#include "arch.h"
#include "../desc/desc.h"
int IDxxx(int id){
	PrintDescription(id);
	printf("\nresult:  %d\n",listSolved[id-1]());
}