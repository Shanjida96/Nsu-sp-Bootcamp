#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y;
    int M,R;
    while(scanf("%d %d",&X,&Y)!=EOF)
    {
      M=(X+Y)/2;
      R= X-M;
      printf("%d %d", M, R);
    }

    return 0;
}
