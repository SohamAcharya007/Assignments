#include<stdio.h>
int main() {
  int a,b;
  printf("Enter a number: \n");
  scanf("%d%d", &a,&b);
  if(a>b)
    printf("%d is greatest\n",a);
  else
    printf("%d is greatest\n",b);
    return 0;
  
}