#include<stdio.h>
#include<math.h>
int main() {
  float p,r,t,si,ci;
  printf("Enter the principle amount,rate of interest and time period");
  scanf("%f %f %f",&p,&r,&t);
  si = (p*r*t)/100;
  ci = p*pow((1+r/100),t)-p;
  printf("\nSI is %f",si);
  printf("\nCI is %f",ci);

  return 0;
}