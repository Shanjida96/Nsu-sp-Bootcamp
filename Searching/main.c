#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int x;
    scanf("%d",&x);
    int is_found=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            is_found = 1;
            printf("%d\n",i);
            break;
        }
    }
    if(is_found==0)
    {
        printf("-1\n");
    }

}
