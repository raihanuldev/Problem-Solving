#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int numbers[n];
    int x;

    for(int i=0; i <n;i++){
        scanf("%d",&numbers[i]);
    }
    scanf("%d", &x);

    // toggle 
    if(numbers[x-1]==0){
        numbers[x-1]=1;
    }
    else{
        numbers[x-1]= 0;
    }

    // array printout
    for(int i=0; i<n; i++){
        printf("%d ",numbers[i]);
    }
    return 0;
}