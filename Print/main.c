#include <stdio.h>
#include <stdlib.h>
int Print(int N)
{
    for(int i=1;i<N;i++)
    {
        printf("%d ",i);
    }
    printf("%d",N);
}
int main()
{
    int N;
    scanf("%d",&N);
    int print=Print(N);
    return 0;
}
