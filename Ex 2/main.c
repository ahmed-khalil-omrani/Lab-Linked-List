#include <stdio.h>
#include "Ex 2.h"
int main() {
    list l;
    int n,i;
    stud st;
    create(&l);
    printf("give the number of student");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("give the ID of the stud numb %d",i);
        scanf("%d",&st.ID);
        printf("give the avg  of the stud numb %d",i);
        scanf("%f",&st.avg);
        insert(&l,st);
    }
    display(l);
    printf("give the ID of the new stud");
    scanf("%d",&st.ID);
    printf("give the avg  of the new stud");
    scanf("%f",&st.avg);
    insert(&l,st);
    display(l);
    printf("the new number of student =%d\n",n+1);
    calcul_avg(&l,n+1);
}
