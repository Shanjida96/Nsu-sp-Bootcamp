#include <stdio.h>
#include <stdlib.h>

int main()
{

    int T;
    scanf("%d",&T);
    int N;

    int found=0;
    for(int t=1;t<=T;t++)
    {
       scanf("%d",&N);
       int A[N];
       for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    int S;
    scanf("%d",&S);
    for(int j=0;j<N;j++)
    {
        if(A[j]==S)
        {
            found=1;
            printf("Case %d: " "%d",t,j);
        }

    }
    if(!found)
    {
        printf("Case %d: Not Found!",t);
    }
    }
   return 0;
}
