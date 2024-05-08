//
// Created by ASUS on 26/04/2024.
//

#ifndef EX_2_EX_2_H
#define EX_2_EX_2_H
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct
{
    int ID;
    float avg;
}stud;
typedef struct
{
  stud key;
  struct node *next;
}node;
typedef struct
{
    node *first;
    node *last;
}list;
void display(list );
void create(list *);
void insert(list *,stud);
unsigned isempty(list);
void sort(list *,node *);
float calcul_avg(list *,int );
#endif //EX_2_EX_2_H
