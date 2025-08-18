#include<stdio.h>
int main() {
    float P,R,T,SI;
    printf("Enter the values of P,R,T:\n");
    scanf("%f %f %f",&P,&R,&T);
    SI= (P*R*T)/100 ;
    printf("The SI value is %f",SI);
    return 0;
}
