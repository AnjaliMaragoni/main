//lcm 
#include <stdio.h>
int main() {
   int n1,n2,lcm,flag=1;
   scanf("%d %d",&n1,&n2);
  // printf("%d %d ",n1,n2);
  lcm=(n1>n2)?n1:n2;
   while(flag)
   {
      if(lcm%n1==0 && lcm%n2==0)
      {
             printf("lcm is %d",lcm);
             flag=0;
      }
     
      lcm++;
   }
   return 0;
} 
