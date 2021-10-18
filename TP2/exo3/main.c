#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 0, b = 1, rep = 0, res;
    printf("choisissez un nombre");
    scanf("%d",&rep);
    
    while (rep > 0) {
        res = b + a;
        a = b;
        b = res;
        rep--;
    }
    
    printf("le resultat est %d", res);
    
    return 0;
}
