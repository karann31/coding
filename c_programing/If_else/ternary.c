#include<stdio.h>
int main(){
    int n;
    printf("Entr a number : ");
    scanf("%d",&n);
    // ternary operator
    // exp ? exp2 : exp:3
n%2==0 ? printf("Even number") : printf("odd number");
    // if(n%2==0)
    // printf("Even number");
    //else
    // printf("odd number");
    return 0;
}