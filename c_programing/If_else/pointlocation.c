#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinate");
    //scanf("%d",&x);
    //scanf("%d",&y);
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("the point is origin");
}
       
else if(x==0){
    printf("Lies on y-axis");
}
else if(y==0){
    printf("Lies on x-axis");
}
else{
    printf("the point does not lie on x or y axis");
}
    return 0;

}