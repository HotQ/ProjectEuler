#include <stdio.h>

#include "arch/arch.h"
#include "math/linkedList.h"

void print(void *a);
void demo1();

int main(){
	demo1();
	return 0;
}

void print(void *a){
	printf("%d\n", *(int*)a);
}

void demo1(){
	List L;
	ListInit(&L);
	ListPushBack(L,"void *e");
	ListPushBack(L,"234");
	ListPushBack(L,"sdf");
	ListPushBack(L,"bse");
	ListPushBack(L,"vq bg,.0");
	void *e;
	printf("%d \n", ListLength(L));
	int a=1;
	((ListInfo)(L->data))->Print=print;
	(((ListInfo)(L->data))->Print)(&a);
}