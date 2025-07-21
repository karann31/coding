#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a; // int* = int ka addres store karta h
   // important *x = 7;
   int** y = &x; // int** = int* ka adrres store karta
   int*** z= &y;
  printf("%d\n",a);
  printf("%d\n",*x);
  printf("%d\n",**y);
  printf("%d\n",***z);
    return 0;
    }