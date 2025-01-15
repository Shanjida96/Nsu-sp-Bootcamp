#include <stdio.h>
#include <stdlib.h>
int sum(int A,int B)
 {
     int sum=A+B;
     return sum;
 }
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    int add=sum(X,Y);
    printf("%d",add);
    return 0;
}
