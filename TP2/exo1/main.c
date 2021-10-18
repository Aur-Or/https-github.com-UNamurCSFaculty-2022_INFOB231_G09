#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0 ,b = 0,i,div;
    printf("choisissez un nombre");
    scanf("%d",&a);
           
    printf("choisissez un deuxieme nombre");
    scanf("%d",&b);
    
    if (a<b)
    {
        i=a;
        div=0;
        while (div == 0) {
            if (b%i==0 & a%i==0)
            {
                div = i;
            }
            else
            {
                i--;
            }
        }
    }
    else
    {
        i=b;
        div=0;
        while (div == 0) {
            if (b%i==0 & a%i==0)
            {
                div = i;
            }
            else
            {
                i--;
            }
        }
    }
    printf("Le PGCD est %d",div);
    return 0;
}
