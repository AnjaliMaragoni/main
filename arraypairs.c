#include<stdio.h>
int main()
{
	int n,a[100],i,j,count=0,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
		printf("false");
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	}
	if(count==n/2)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}

		098
