#include<stdio.h>
int main() {
  int P,R,n,t,CI;
  printf("Enter the values of P,R,n,t:\n");
  scanf("%d%d%d%d", &P,&R,&n,&t);
  CI= P*(1+R/n)^(n*t);
  printf("The Compund Interest is %d\n");
  return 0;

}
