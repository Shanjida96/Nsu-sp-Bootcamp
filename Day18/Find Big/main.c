#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,N;
    while(scanf("%d %d", &M,&N)!=EOF)
    {
        if(M<N)
        {
            printf("%d",N);

        }
        else
        {
            printf("%d",M);
        }
    }
    return 0;
}
