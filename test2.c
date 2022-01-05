#include<stdio.h>
#include<string.h>
int main() {
  char str[20];
  printf("\nEnter a string");
  fgets(str, 20, stdin);
  printf("%s",str);
  return 0;
}