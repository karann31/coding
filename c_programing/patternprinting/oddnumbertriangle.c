#include<stdio.h>
int main(){
    int n;
    printf("Entera number of rows : ");
    scanf("%d",&n);
    // n = 4 = 1 2 5 7
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}