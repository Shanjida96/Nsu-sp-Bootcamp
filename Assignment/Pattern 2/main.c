#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N;
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
      for(int j=1;j<N-i;j++)
      {
          printf(" ");
      }
      for (int k = i; k >= 1; k--) {
            printf("%d", k);
     }
      printf("\n");
   }
   return 0;

}
