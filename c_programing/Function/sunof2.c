#include<stdio.h>
int add(int x, int y){
    return x*y; // we d0 all thingss like add,sub,multiply,divide
}
int main(){
    int a;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    int sum = add (a,b);
    printf("%d",sum);
    return 0;
}
