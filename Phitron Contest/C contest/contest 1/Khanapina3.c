#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1; i<=N; i++){
        printf("%d",i);
        if(i%3==0 || i%5==0){
            printf(" Yes \n");
            
        }else{
            printf(" No\n");
        }
    }
}