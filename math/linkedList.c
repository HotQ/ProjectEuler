#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"


void ListInit(List *L){
    *L=(List)malloc(sizeof(Node));
    (*L)->data=malloc(sizeof(struct ListInfo));
    (*L)->next=(*L)->prior=(*L);
}

int ListLength(List L){
    List crtNode=L,headNode=L;
    int i=0;
    while(crtNode->next!=headNode){
        crtNode=crtNode->next;
        i++;
    }
    return i;
}

void ListPushBack(List L,void *e){

    List headNode = L,
                    oldTail=L->prior,
                    newTail;
    newTail=(List)malloc(sizeof(Node));
    newTail->data=e;

    newTail->next=L;
    newTail->prior=oldTail;

    oldTail->next=newTail;
    L->prior=newTail;
}

