#include <stdio.h>
#include <stdlib.h>


int pgcd(int a, int b)
{
    if(a==b)
    {
        return a;
    }
    else
    {
        if(a>b)
        {
            return pgcd(a-b, b);
        }
        else
        {
            return pgcd(a, b-a);
        }
    }
}

int main()
{
    int a = 0 ,b = 0;
    printf("premier nombre?");
    scanf("%d",&a);
           
    printf("second nombre?");
    scanf("%d",&b);
    
    printf("Le PGCD est %d",pgcd(a,b));
    return 0;
}

