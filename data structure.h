#ifndef STACK
#define STACK

#define MAX 500
typedef int type;
typedef struct list{
    int size;
    type ArrayList[MAX];
}List;
//********************************************
//create
void create(List *l);
//********************************************
//is full
int isFull(List l);
//********************************************
//size
int listSize(List l);
//*********************************************
//is empty
int isEmpty(List l);
//**********************************************
//insert list
int insertList(List *l,type el,int p);
//************************************************
//delete list
int deleteList(List *l,type *el,int p);
//**************************************************
//traverse
void traverse(List *l,void (*F)(type *el));
//**************************************************
//clear
void clear(List *l);
//**************************************************
//retrieve -> get copy form element
int retrieve(List l,type *el,int p);
//**************************************************
//replace to values
int replaceList(List *l,type el,int p);
//**************************************************
#endif // STACK







