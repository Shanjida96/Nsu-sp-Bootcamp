#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d ",&A[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<N;i++)
    {
        if(A[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d\n",even ,odd);
}
