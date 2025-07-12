#include<stdio.h>
int main(){
    int n; // inti baar loop chalega
    printf("Enter a number");
    scanf("%d",&n);
    // 4 7 10 13 16 19....upto n number of termms
    // we are going to use extra variables
    int a = 4; // first no. is 4 thats why we write 4 here
        for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a + 3; // differnce of 3 btween no. thats why we write 3 here
    }
    return 0;
}