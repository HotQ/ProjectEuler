#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

typedef struct Node{
    void *data;
    struct Node *prior;
    struct Node *next;
}Node,*List;

typedef struct ListInfo{
	void (*Print)(void *e);
	void (*Free)(void *e);
}*ListInfo;

void ListInit(List *);

int ListLength(List );
void ListPushBack(List ,void *);

#endif // LINKEDLIST_H_INCLUDED
