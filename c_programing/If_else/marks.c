#include<stdio.h>
int main(){
    int n;
    printf("enter percentage");
    scanf("%d",&n);
 // more than 80 = A
 //more than 60 = b
 //more than 40 = c
 //less than 40 = d
 if(n>80){
    printf("a grade \n");
 }
else if(n>60){
    printf("b grade\n");
} 
else if(n>40){
    printf("c grade\n");
} 
else{

    printf("d grade\n");
}

    
    return 0;
}