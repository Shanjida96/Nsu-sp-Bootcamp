#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,M;
    int Price;
    while(scanf("%d %d",&X,&M)!=EOF)
    {
        Price=(X*M)/7;
        printf("%d",Price);
    }
    return 0;
}
