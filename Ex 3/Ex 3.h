//
// Created by ASUS on 01/05/2024.
//

#ifndef EX_3_EX_3_H
#define EX_3_EX_3_H
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char *title;
    int numb;
}book;
typedef struct
{
    book key;
    struct node *next;
}node;
typedef struct
{
    node *first;
    node *last;
}list;
void create(list *);
void insert(list *, book);
unsigned isempty(list);
void display(list );
void deleteempty(list *);
void calculempty(list *);
#endif //EX_3_EX_3_H
