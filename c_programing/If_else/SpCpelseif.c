#include<stdio.h>
int main(){
    int cp;
    printf("Enter cost price");
    scanf("%d",&cp);
        int sp ;
    printf("Enter selling price");
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit");
    }
else if(cp>sp){
    printf("lose");
}
else{
    printf("No profit, no lose");
}
    return 0;
}