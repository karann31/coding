#include<stdio.h>
void england(){
    printf("You are in England\n"); // 6
    return; // 7
}
void australia(){
    printf("You are in Australia\n"); // 4
    void england();
    england(); // calling a england // 5
    return; // 8
}
void india(){
    printf("You are in India\n"); // 2
    void australia();
    australia(); // calling australia  // 3
    return;  // 9
}
int main(){
    india(); // caling a function // 1
    return 0; // 10
}
