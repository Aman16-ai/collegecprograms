#include<stdio.h>

void swapUsingThreeVarables(int a,int b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
 printf("\nAfter swaping a = %d and b = %d",a,b);
}
void swapUsingWithoutThreeVar(int a,int b) {
  a = a + b;
  b = a - b;
  a = a - b;
 printf("\nAfter swaping a = %d and b = %d",a,b);
}
int main() {
  int a,b;
  printf("Enter the value of a and b");
  scanf("%d %d",&a,&b);
  printf("\nBefore swaping a = %d and b = %d",a,b);
  swapUsingWithoutThreeVar(a,b);
  return 0;
}