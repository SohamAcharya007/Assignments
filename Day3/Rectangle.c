#include<stdio.h>
int main() {
  int length,breadth,P,A;
  printf("Enter the value of length and breadth: \n");
  scanf("%d%d",&length,&breadth);
  P= 2*(length+breadth);
  A= length*breadth;
  printf("The perimeter of the reactangle is %dm \n",P);
  printf("The area of the rectangle is %dm*2 \n", A);
  return 0;
}
