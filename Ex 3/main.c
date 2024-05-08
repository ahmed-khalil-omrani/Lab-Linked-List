#include <stdio.h>
#include "Ex 3.h"

int main() {
    list l;
    book b;
    int n,i;
    char *nam;

    create(&l);
    printf("give the number of the books");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        b.title=(char *)malloc(sizeof(char));
        printf("give the name of the book %d",i);
        scanf("%s",b.title);
        printf("give the number of the book %d",i);
        scanf("%d",&b.numb);
        printf("%s\n",b.title);
        insert(&l,b);
    }
    display(l);
    calculempty(&l);
    printf("-----------after delete----------\n");
    deleteempty(&l);
    display(l);
}
