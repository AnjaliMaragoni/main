#include <stdio.h>

int main()
{
   //kth smallest factor of n 
    int i,n,a[10],j=0,k;
	scanf("%d %d",&n,&k);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			a[j]=i;
			j++;
		}
	}
	if(k<j)
	printf("%d",a[k-1]);
	else if(k>j)
	{
	    printf("-1");
	}
    return 0;
}
