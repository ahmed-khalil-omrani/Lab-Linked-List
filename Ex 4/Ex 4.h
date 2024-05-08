//
// Created by ASUS on 02/05/2024.
//

#ifndef EX_4_EX_4_H
#define EX_4_EX_4_H
#include <stdlib.h>
#include <stdio.h>
typedef struct {
    int info;
    struct cell *next;
}cell;
typedef struct
{
    cell *first;
    cell *last;
}list;
void create(list *);
unsigned isempty(list);
void INSERTVALAFTER(list *,int );
void insert(list *,int);
void display(list);
void SORTEDINSERT5LIST(list *,int );
void DELETEAFTER(list *);
void DELETMAX(list *);
#endif //EX_4_EX_4_H
