//
// Created by ASUS on 26/04/2024.
//

#include "Ex 2.h"
/*void insert(list *ll,stud data)
{
    node *p;
    p=(node *)malloc(sizeof(node));
    p->key=data;
    p->next=NULL;
    if(ll->first==NULL)
    {
        ll->first=p;
        ll->last=p;
    }
    else
    {
        ll->last->next=p;
        ll->last=p;
    }
}
void ins_sort(list *ll,stud data)
{
    node *temp,*p;
    bool trv=false;
    temp=(node *)malloc(sizeof(node));
    p=(node *)malloc(sizeof(node));
    p->key=data;
    while(!trv)
    {

    }
}*/
void display(list l)
{
    node *n;
    n=(node *)malloc(sizeof(node));
    n=l.first;
    while(n)
    {
        printf("%d\n",n->key.ID);
        printf("%f\n",n->key.avg);
        n=n->next;
    }
}
void create(list *l)
{
    l->first=NULL;
    l->last=NULL;
}
void insert(list *l,stud s)
{
    node *n;
    n=(node *)malloc(sizeof(node));
    n->key=s;
    n->next=NULL;
    if(!isempty(*l))
    {
        sort(l,n);
    }
    else
    {
        l->first=n;
        l->last=n;
    }
}
void sort(list *l , node *n)
{
    node *nd;
    stud st;
    nd=l->first;
    if(n->key.avg<l->first->key.avg)
    {
        n->next=l->first;
        l->first=n;
    }
    else{
    while(nd && nd->key.avg<n->key.avg)
    {
        nd=nd->next;
    }
    if(nd==NULL)
    {
        l->last->next=n;
        l->last=n;
    }
    else
    {
        n->next=nd->next;
        nd->next=n;
        st=nd->key;
        nd->key=n->key;
        n->key=st;
    }
    }
}
unsigned isempty(list l)
{
    return l.first==NULL && l.last==NULL;
}
float calcul_avg(list *l,int n)
{
    float s;
    node *nd;
    nd=l->first;
    s=0;
    while(nd)
    {
        s=s+nd->key.avg;
        nd=nd->next;
    }
    printf("the average of the class = %f",s/n);
}