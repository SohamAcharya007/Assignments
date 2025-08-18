#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter values of a and b:\n" );
    scanf("%d%d", &a,&b);
    c=a;
    a=b;
    b=c;
    printf("Now values of a and b are %d %d", a,b);
    return 0;
}