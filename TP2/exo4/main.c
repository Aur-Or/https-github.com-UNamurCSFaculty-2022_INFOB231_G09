#include <stdio.h>
#include <stdlib.h>

factoriel(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factoriel(n - 1);
}

int main()
{
    int n = 0, res;
    printf("choisissez un nombre");
    scanf("%d",&n);

    printf("le resultat est %d", factoriel(n));
    
    return 0;
}
