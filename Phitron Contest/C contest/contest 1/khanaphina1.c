#include <stdio.h>

int main(){
    int M;
    scanf("%d",&M);
    if(M >=1000){
        printf("Three Kacchi");
    }
    else if(M >=500){
        printf("One Large Pizza");
    }
    else if(M>=250){
        printf("Three Small Burger");
    }
    else if(M>=100){
        printf("Three Fuchka");
    }
    else{
        printf("Nothing");
    }
}