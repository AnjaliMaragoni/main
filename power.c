#include<stdio.h>
int main() {
   int base,exp,res=1;
   scanf("%d %d",&base,&exp);
  
   while(exp!=0)
   {
       res=res*base;
       exp--;
   }
   printf("%d",res);
   return 0;
}  
