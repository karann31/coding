#include<stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n%5==0){
       if(n%3==0){
        printf("the number is divisuble by 5 and 3");
            }
            else{
                printf("the number is not divisible by 5 and 3");
            }
        }
        else{
            printf("the number is not divisible by 5 and 3");
        }
    return 0;
}