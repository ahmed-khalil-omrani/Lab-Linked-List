//
// Created by ASUS on 02/05/2024.
//

#include "Ex 4.h"
void INSERTVALAFTER(list *l,int x)
{
    cell *n,*nd;
    if(!isempty(*l)){
    nd=l->first;
    while(nd){
        n=(cell *)malloc(sizeof(cell));
        n->info=x;
        n->next=NULL;
        n->next=nd->next;
        nd->next=n;
        nd=n->next;
    }
    }
    else
    {
        insert(l,x);
    }
}
void create(list *l)
{
    l->first=NULL;
    l->last=NULL;
}
unsigned isempty(list l)
{
    return l.first==NULL && l.last==NULL;
}
void insert(list *l,int x)
{
    cell *n;
    n=(cell *)malloc(sizeof(cell));
    n->info=x;
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
    cell *n;
    n=l.first;
    while(n)
    {
        printf("%d\n",n->info);
        n=n->next;
    }

}
void SORTEDINSERT5LIST(list *l,int x)
{
    cell *n,*nd,*prv;
    n=(cell *)malloc(sizeof(cell));
    n->info=x;
    n->next=NULL;
    nd=l->first->next;
    prv=l->first;
    if(n->info<l->first->info)
    {
        n->next=l->first;
        l->first=n;
    }
    else if(n->info>l->last->info)
    {
        l->last->next=n;
        l->last=n;
    }
    else{
    while(nd->info<n->info)
    {
        prv=prv->next;
        nd=nd->next;
    }
    prv->next=n;
    n->next=nd;
    }
}
void DELETEAFTER(list *l)
{
    cell *n,*prv;
    prv=l->first;
    n=prv->next;
    while(n && prv->next)
    {
        printf("cc");
        prv->next=n->next;;
        free(n);
        n=prv->next;
    }
}
void DELETMAX(list *l)
{
    cell *max,*n,*prv,*prm;
    max=l->first;
    prv=max;
    n=max->next;
    while(n)
    {
        if(n->info>max->info)
        {max=n;
        prm=prv;
        }
        prv=n;
        n=n->next;
    }
    prm->next=max->next;
    free(max);

}