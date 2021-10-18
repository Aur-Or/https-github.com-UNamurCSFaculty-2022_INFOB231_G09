#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 0 ,b = 0;
    printf("choisissez un nombre");
    scanf("%d",&a);
    
    if (a%2==0)
    {
        a = a - 1;
        b = b + a;
    }
    else
    {
        b = b + a;
    }
    while (a>0)
    {
        a = a - 2;
        b = b + a;
            
    }
    printf("le resultat est %d", b);
    
    return 0;
}
