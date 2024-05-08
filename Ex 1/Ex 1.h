//
// Created by ASUS on 28/04/2024.
//

#ifndef EX_1_EX_1_H
#define EX_1_EX_1_H
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct
{
    int key;
    struct node *next;
}node;
typedef struct
{
    node *first;
    node *last;
}list;
void create(list *);
void add(list *,int );
unsigned isempty(list );
void display(list);
void occ(list * );
void elem(list *,node *);
#endif //EX_1_EX_1_H
