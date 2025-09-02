#include<stdio.h>
int main() {
  char h,t;
  printf("Enter H or T: \n");
  scanf("%c", &h);
  if(h=='H' || h=='h')
    printf("Heads\n");
  else if(h=='T' || h=='t')
    printf("Tails\n");
    return 0;
}