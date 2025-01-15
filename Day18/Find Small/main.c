#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
    while(scanf("%d %d %d ",&A,&B,&C)!=EOF)
    {
        if(A<B<C)
        {
            printf("%d", A);
        }
        else if(B<C<A)
        {
            printf("%d", B);
        }
        else if(C<B<A)
        {
            printf("%d", C);
        }
    }
    return 0;
}
