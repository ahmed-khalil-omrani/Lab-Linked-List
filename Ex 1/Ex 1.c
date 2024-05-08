//
// Created by ASUS on 28/04/2024.
//

#include "Ex 1.h"
void create(list *l)
{
    l->first=NULL;
    l->last=NULL;
}
unsigned isempty(list l)
{
    return l.first==NULL && l.last==NULL;
}
void add(list *l,int v)
{
    node *n;
    n=(node *)malloc(sizeof(node));
    n->key=v;
    n->next=NULL;
    if(!isempty(*l))
    {
        l->last->next=n;
        l->last=n;
    }
    else
    {
        l->last=n;
        l->first=n;
    }
}
void display(list l)
{
    node *n;
    n=(node *)malloc(sizeof(node));
    n=l.first;
    while(n)
    {
        printf("%d\n",n->key);
        n=n->next;
    }

}
void occ(list *l)
{
    node *n;
    n=(node *)malloc(sizeof(node));
    assert(!isempty(*l));
    n=l->first;
    while(n)
    {

       elem(l,n);
       n=n->next;
    }
}
void elem(list *l,node *n)
{
    node *prv,*nd;
    prv=(node *)malloc(sizeof(node));
    nd=(node *)malloc(sizeof(node));
    nd=n->next;
    *prv=*n;
    while(nd)
    {
        if(nd->key==n->key)
        {
            prv->next=nd->next;
            /*free(nd);*/
            nd=prv->next;
        }
        else
        {
            *prv=*nd;
            printf("prv:%d",prv->key);
            nd=nd->next;
        }

    }
}