#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the coefficient of quad ax^2+bx+c: ");
    scanf("%d%d%d",&a,&b,&c);
    float root1,root2,;
    float d = b*b - 4*a*c;
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);
    printf("Root1 = %.2f\n",root1);
    printf("Root2 = %.2f\n",root2);
    return 0;
}
 

