#include<stdio.h>
int main(){
  int a;
  printf("Enter roll number: \n");
  scanf("%d", &a);
  if(a==100)
    printf("Roll 100 is present \n");
  else
    printf("Roll 100 is absent\n");
  return 0;
  
}