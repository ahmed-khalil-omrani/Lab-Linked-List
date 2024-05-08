#include "Ex 4.h"

int main() {
    list l;
    int n,i,x;
    create(&l);
    printf("give the length of the list");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("give the new cell in list");
        scanf("%d",&x);
        insert(&l,x);
    }
    display(l);
    /*printf("give the value to insert");
    scanf("%d",&x);
    INSERTVALAFTER(&l,x );
    printf("-------------after the insert-----------------\n");
    display(l);*/
    printf("give the value to insert");
    scanf("%d",&x);
    SORTEDINSERT5LIST(&l,x );
    display(l);
    printf("---------------after delete----------------\n");
    DELETEAFTER(&l);
    /*DELETMAX(&l);*/
    display(l);


}
