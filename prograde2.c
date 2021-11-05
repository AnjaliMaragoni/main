#include <stdio.h>

int main()
{
     //sum of 1st array elements should be less than sum of 2nd array ele
  //printf("Hello World");
    int n,i,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        sum1=sum1+a[i];
    }
    for(i=0;i<n;i++)
    {
        sum2=sum2+b[i];
    }
    if(sum1<sum2)
        printf("YES");
    else
        printf("NO");
    return 0;
}
