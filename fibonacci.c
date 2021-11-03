// fibonacci series
#include <stdio.h>
int main() {
   int n1=0,n2=1,n3,n,i;
   scanf("%d",&n);
  // printf("%d %d ",n1,n2);
   for(i=1;i<=n;++i)
   {
       printf("%d",n1);
       n3=n1+n2;
       //printf(" %d ",n3);
       n1=n2;
       n2=n3;
   }
   return 0;
} 
