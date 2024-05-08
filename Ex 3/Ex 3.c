//
// Created by ASUS on 01/05/2024.
//

#include "Ex 3.h"
void create(list *l)
{
    l->first=NULL;
    l->last=NULL;
}
void insert(list *l, book b)
{
    node *n;
    n=(node *)malloc(sizeof(node));
    n->key=b;
    n->next=NULL;
    if(!isempty(*l)){
    if (b.numb<=1)
    {
        n->next=l->first;
        l->first=n;
    }
    else
    {
        l->last->next=n;
        l->last=n;
    }}
    else
    {
        l->first=n;
        l->last=n;
    }

}
unsigned isempty(list l)
{
    return l.first==NULL && l.last==NULL;
}
void display(list l)
{
    node *n;
    n=(node *)malloc(sizeof(node));
    n=l.first;
    while(n)
    {
        printf("the name of the book is %s the number of the book is %d\n",n->key.title,n->key.numb);
        n=n->next;
    }
}
void deleteempty(list *l)
{
    node *n,*prv;
    n=(node *)malloc(sizeof(node));
    prv=(node *)malloc(sizeof(node));
    n=l->first;
    prv=NULL;
    while(n)
    {
        if(n->key.numb==0 && prv!=NULL)
        {
            prv->next=n->next;
        }
        else if(n->key.numb==0 && prv==NULL)
        {
            l->first=n->next;
            free(n);
        }
        else
        {
            prv=n;
        }
        n=n->next;
    }
}
void calculempty(list *l)
{
    int i=0;
    node *n;
    n=(node *)malloc(sizeof(node));
    n=l->first;
    while(n)
    {
        if(n->key.numb==0)
            i++;
        n=n->next;
    }
    printf("the number of empty books is %d\n",i);

}
