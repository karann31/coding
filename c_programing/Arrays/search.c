#include<stdio.h>
# include<stdbool.h>
    int main(){
    int arr[7] = {1,5,3,4,5,5,7};
    int x = 4;
    int idx = -1;
    bool flag = false; // false means not present
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            flag = true; // true means present
            idx = i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present int he array",x);
    }
    else{
         printf("%d is present int he array and its index is %d",x,idx);
    }
      return 0;
}