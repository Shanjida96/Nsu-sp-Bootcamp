#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int result=N*567;
    printf("%d\n",result);
    result-=357;
    printf("%d\n",result);
    result+=7492;
    printf("%d\n",result);
    result*=9879;
    printf("%d\n",result);
    result-=4787;
    printf("%d\n",result);
    result*=7493;
    printf("%d\n",result);
    result-=498;
    printf("%d\n",result);
    result*=1237;
    printf("%d\n",result);
    result+=100;
    printf("%d\n",result);
    result*=9879;
    printf("%d\n",result);
    result-=9;
    printf("%d\n",result);
    int lastdigit=result % 100;
    printf("%d\n",lastdigit);
    return 0;
}
