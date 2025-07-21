#include<stdio.h>
int main(){
    void fun(); // by this line there no need to code proper order wise // uper neche kaise bhi likh sakhte h
    fun();
    return 0;
}
void fun(){
    printf("Hello");
}