#include<stdio.h>
int main() {
  int *p;
  int a = 10;
  p = &a;
  printf("%d",a);
  *p = 20;
  printf("New value of a is %d",a);
  return 0;
}