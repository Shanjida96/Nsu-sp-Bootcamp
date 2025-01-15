#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,D;
    while(scanf("%d %d %d %d", &A, &B, &C, &D)!= EOF)
    {
        int result= A*B-C*D;
        printf("%d\n",result);
    }
    return 0;
}
