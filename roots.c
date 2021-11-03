// to find roots of a equation
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,discriminant,root1,root2,realpart,imgpart;
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant=(b*b-4*a*c);
    if(discriminant>0)
    {
        printf("real and distinct\n");
        root1= ( (-b+sqrt(discriminant))/(2*a) );
        root2=  ( (-b-sqrt(discriminant))/(2*a) );
        printf("%lf %lf\n",root1,root2);
    }
    if(discriminant==0)
    {
        printf("real and same");
        root1= root2 = ( (-b)/(2*a) );
       
        printf("root1,root2 = %lf ",root1);
    }
    else
    {
        printf("img and distinct\n");
        realpart=( (-b)/(2*a) );
        imgpart= sqrt(-discriminant)/(2*a) ;
        printf("root1=%lf+%lf and \n root2=%lf-%lf",realpart,imgpart,realpart,imgpart);
    }
    
    return 0;
    
}

