#include <stdio.h>

int main()
{
    //sum of array elemts should be less than or equal to k
    //printf("Hello World");
    int n,k,i,a[100];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    if(sum<=k)
        printf("Yes");
    else
        printf("no");
    
    return 0;
}
