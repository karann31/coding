#include<stdio.h>
int main(){
    int a;
    int b;
  int c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("enter a 2nd number : ");
      scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    if(a<b && a>c){
    printf("%d is thr greatest",a);

    }
    if(b>a && b>c){
    printf("%d is thr greatest",b);
    }
    if(c>a && c>b){
    printf("%d is thr greatest",c);
    }
        
        return 0;
}