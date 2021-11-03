//reverse a num
#include <stdio.h>
int main() {
   int n,rem,rev=0;
   scanf("%d",&n);
  // printf("%d %d ",n1,n2);
   while(n!=0)
   {
       //flag++;
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
   }
   printf("%d",rev);
   return 0;
}
