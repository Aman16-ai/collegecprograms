#include <stdio.h>

int main()
{
    int n;
    int i=0;
    int arr[10];
    printf("\nEnter the a decimal number");
    scanf("%d",&n);
    while(n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("\nThe binary conversion is : \n");
    for(int j =0;j<i;j++) {
        printf("%d",arr[j]);
    }
    return 0;
}
