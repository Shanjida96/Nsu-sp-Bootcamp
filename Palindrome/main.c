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
   int left=0;
   int right=n-1;
   while(left<right)
   {
       if(arr[left]==arr[right])
       {
           return "Yes";
       }
       else
       {
         return "No";

       }
       left++;
       right--;
   }
}
