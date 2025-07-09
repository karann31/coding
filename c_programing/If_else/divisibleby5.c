#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if (n%5==0)
    {
        printf("the number is divisible 5");
    }
    else
    {
        printf("the number is not divisible 5");
    }
    return 0;

}
