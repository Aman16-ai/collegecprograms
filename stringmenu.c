#include<stdio.h>
#include<stdlib.h>
int strLength(char *str);
/*Write a menu driven program in C to perform following operations on string without using string functions
	(i) Length of the string
	(ii) To concatenate two strings
            (iii) To find the reverse of a string
	(iv) To copy one string into another */
void copystr(char *str1,char *str2) {
  int i =0;
  int j =0;
  while(str1[i]!='\0') {
    str2[i] = str1[i];
    i++;
  }
}
char * strreverse(char *str) {
  char *newstr = (char *)malloc(50 * sizeof(char));
  for(int i = 0,j = strLength(str)-1;i<strLength(str);i++,j--) {
    newstr[j] = str[i];
  }
  return newstr;
}
int strLength(char *str) {
  int count = 0;
  int i = 0;
  while(str[i] != '\0') {
    count++;
    i++;
  }
  return count;
}
char *concatestr(char *str1,char *str2) {
  char *newstr = (char *)malloc(50 * sizeof(char));
  int i =0;
  int j = 0;
  int k =0;
  while(str1[i] != '\0') {
    newstr[k] = str1[i];
    i++;
    k++;
  }
  while(str2[j] != '\0') {
    newstr[k] = str2[j];
    j++;
    k++;
  }
  return newstr;
}
int menu() {
  int choice;
  printf("\nPress 1 Length of the string");
  printf("\nPress 2 To concatenate two strings");
  printf("\nPress 3 To find the reverse of a string");
  printf("\nPress 4 to copy one string into another");
  printf("\nPress 5 Exit");
  printf("\n\nEnter your choice");
  scanf("%d",&choice);
  return choice;
}

int main() {
  char str[20];
  char str2[20];
  int len;
  switch(menu()) {
    case 1:
    printf("\nEnter a string");
    scanf("%s",str);
    len = strLength(str);
    printf("\nThe Length of given string is %d",len);
    break;
    case 2:
    printf("\nEnter first string");
    scanf("%s",str);
    printf("\nEnter second string");
    scanf("%s",str2);
    printf("concated string %s",concatestr(str, str2));
    break;
    case 3:
    printf("\nEnter first string");
    scanf("%s",str);
    printf("Reverse is %s",strreverse(str));
    break;
    case 4:
    printf("\nEnter first string");
    scanf("%s",str);
    copystr(str, str2);
    printf("String 2 is %s",str2);
    break;
    case 5:
    exit(0);
  }
  return 0;
}