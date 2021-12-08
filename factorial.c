#include<stdio.h>
int factorialUsingiteration(int num) {
  int fact = 1;
  for(int i=num;i>=1;i--) {
    fact = fact *i;
  }
  return fact;
}
int factorialUsingRecursion(int num) {
  if(num == 0) {
    return 1;
  }
  return num*factorialUsingRecursion(num-1);
}
int main() {
  int num;
  printf("Enter a positive to calculate the factorial");
  scanf("%d",&num);
  printf("\nThe factorial of %d is %d",num,factorialUsingRecursion(num));
  return 0;
}