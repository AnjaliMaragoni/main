//no of digits in a integer
#include <stdio.h>
int main() {
   int n,count=0;
   scanf("%d",&n);
  // printf("%d %d ",n1,n2);
   while(n!=0)
   {
       //count++;
       n=n/10;
      
     
      count++;
   }
   printf("%d",count);
   return 0;
} 
