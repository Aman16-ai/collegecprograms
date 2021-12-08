#include<stdio.h>

//011235

int fib(int n) {
  if(n<=1) {
    return n;
  }
  return fib(n-1) + fib(n-2);
}
int main() {
  for(int i =0;i<6;i++) {
    printf("%d" ,fib(i));
  }
  return 0;
}