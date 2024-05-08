#include <stdio.h>
#include "Ex 1.h"
int main() {
    list l;
    int i,n,x;
    create(&l);
    printf("give the number of element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("give the element numb %d",i );
        scanf("%d",&x);
        add(&l,x);
    }
    occ(&l);
    display(l);
}
