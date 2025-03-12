//  write a progamme to swapping two no. by using third varrible________

#include <stdio.h>
int main ()
    {
        int a, b,  c;
        printf("\n enter the value of a ");
        scanf("%d",&a);
        printf("\n enter the value of b ");
        scanf("%d",&b);
        c=a;
        a=b;
        b=c;
        printf("\n value of a is %d \n value of b is %d  ",a,b);
    }
