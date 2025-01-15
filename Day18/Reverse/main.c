#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int reverse=0;
    while(N!=0)
    {
        reverse=reverse*10+ N%10;
        N/=10;
    }
    printf("%d",reverse);
    return 0;
}
