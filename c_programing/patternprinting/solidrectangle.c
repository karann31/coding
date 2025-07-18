#include<stdio.h>
int main(){
    int n;
    printf("enter numbers of rows : ");
    scanf("%d",&n);
    int m;
    printf("enter numbers of columns : ");
    scanf("%d",&m);
    // *****...upto n no. of stars
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
           }
           printf("\n");
    }
    return 0;
}