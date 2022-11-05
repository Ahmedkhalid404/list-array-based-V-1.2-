#include <stdio.h>
#include <stdlib.h>
#include "data structure.h"
void print(type *el);
int main()
{
    List l;
    create(&l);
        for(int i=45;i<55;i++)
        {
            if(!insertList(&l,i,i-45))
                break;
            printf("%d\n",i);
        }
        printf("-------------------------------------\n");
        traverse(&l,&print);
    return 0;
}
void print(type *el)
{
    printf("%d\n",(*el));
}
