#include<stdio.h>
int main(){ 

        int a;
    printf("Enter 1st side : ");
    scanf("%d",&a);
    int b;
    printf("enter a 2nd side : ");
      scanf("%d",&b);
      int c;
    printf("Enter 3rd side : ");
    scanf("%d",&c);
    if((a+b )>c && (b+c)>a && (c+a)>b){
        printf("valid triangle");

    }
    else{
        printf("Invalid triangle");
    }
    
        
        return 0;
}