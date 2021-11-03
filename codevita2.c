#include <stdio.h>
int main()
{
	int s,r,i,j,sam[100],r1,r2,c=0,result[100],k=0;
	scanf("%d %d",&s,&r);//no of samples and ranges
	for(i=0;i<s;i++)
	{
		scanf("%d",&sam[i]);//samples
	}
	for(i=0;i<r;i++)
	{
		scanf("%d %d",&r1,&r2);
		for(j=0;j<s;j++)
		{
			if((sam[j]>=r1) && (sam[j]<=r2))//checking if the sample is in range
			{
				c++;
			}
		}
		result[k]=c;
		k++;
		c=0;
	}
	for(i=0;i<r;i++)
		printf("%d ",result[i]);
	return 0;
}

	
