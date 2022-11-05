#include <stdio.h>
#include <stdlib.h>
#include "data structure.h"
//********* will use swap in methodes *********\\
//swap to elments
void swap( type *p1 , type *p2 )
{
    type temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
//********* will use swap in methodes *********\\
//create
void create(List *l){
    l->size = 0;//size will represent last index can insert
}
//********************************************
//is full
int isFull(List l){
    return l.size == MAX;
}
//********************************************
//size
int listSize(List l){
    return l.size;
}
//*********************************************
//is empty
int isEmpty(List l){
    return !l.size;//if 0 return 1 <----> else return 0
}
//**********************************************
//insert list
int insertList(List *l,type el,int p)
{
    //border to insert
    //p should be >= 0
    //p should be <= size
    if( p >= 0 && p <= l->size )
    {
       /*
            ex)
            list(0 1 2 3 4 size)
                 1 2 3 4 5  --
                             i
            will swap from size to p
            and add elment in p
        */
        int i;
        for(i = l->size ; i > p ; i-- )
            {
                swap( &l->ArrayList[i], &l->ArrayList[i-1]);
            }
            l->ArrayList[p] = el;
            l->size++;
        return 1;//refer to Success insert
    }
    else
        return 0;//refer to failed insert
}
//************************************************
//delete list
int deleteList(List *l,type *el,int p)
{
    //border to insert
    //p should be >= 0
    //p should be <= size
    if( p >= 0 && p <= l->size-1 )
    {
        int i;
        *el = l->ArrayList[p];
        for(i=p ; i < (l->size-1) ; i++)
        {
            swap(&l->ArrayList[i],&l->ArrayList[i+1]);
        }
        l->size--;
        return 1;//refer to Success delete
    }
    else
        return 0;//refer to failed delete



}
//**************************************************
//traverse
void traverse(List *l,void (*F)(type *el))
{
    for(int i=0;i<l->size;i++)
    {
        (*F)(&l->ArrayList[i]);
    }
}
//**************************************************
//clear
void clear(List *l)
{
    l->size = 0;
}
//**************************************************
//retrieve -> get copy form element
int retrieve(List l,type *el,int p)
{
    if( p >= 0 && p <= l.size )
    {
        *el = l.ArrayList[p];
        return 1;
    }
    else
        return 0;
}
//**************************************************
//replace to values
int replaceList(List *l,type el,int p)
{
    if( p >= 0 && p <= l->size-1 )
    {
        l->ArrayList[p] = el;
        return 1;
    }
    else
        return 0;
}
//**************************************************

