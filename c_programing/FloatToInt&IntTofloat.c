#include<stdio.h>
int main(){
    float x;
    printf("Enter a decimal number : ");
    scanf("%f",&x);
    int y = x;
    printf("The integer number is : ");
    print("%d",y);
    float z = x-y;
    printf("\nThe fractinal part of the number is : ");
    printf("%f",z);
    return 0;
}

        