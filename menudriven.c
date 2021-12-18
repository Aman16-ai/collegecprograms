#include<stdio.h>
#include<stdlib.h>
int menu() {
  int choice;
  printf("\n1. Prime or not");
  printf("\n2. Odd or even");
  printf("\n3. Exit");
  printf("\n\nEnter your choice");
  scanf("%d",&choice);
  return choice;
}
void oddevencalculate() {
  int n;
  printf("/nEnter a number");
  scanf("%d",&n);
  if(n % 2 == 0) {
    printf("\nNumber is even");
  }
  else {
    printf("\nNumber is odd");
  }
}
void primecalculate() {
  int n,flag = 0;
  printf("\nEnter a number");
  scanf("%d",&n);
  for(int i = 2;i<n;i++) {
    if(n % i == 0) {
      flag = 1;
      break;
    }
  }
  if(flag == 1) {
    printf("\nNumber is prime");
  }
  else {
    printf("\nNumber is not prime");
  }
}
int main() {
  while(1) {
    switch(menu()) {
      case 1: primecalculate();
      break;
      case 2: oddevencalculate();
      break;
      case 3:
      exit(0);
      default:
      printf("\nPlease enter a valid choice");
    }
  }
  return 0;
}