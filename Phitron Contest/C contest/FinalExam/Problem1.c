#include <stdio.h>


int main(){
    int tcase;
    scanf("%d",&tcase);

    for(int i =0; i<tcase; i++){
        int n;
        scanf("%d",&n);

        for(int i =1; i<=n;i++){
            printf("%d ",i);
        }
        for(int i =n-1; i > 0; i--){
            printf("%d ",i);
        }
        printf("\n");

    }
}


//alhamudlillah done one... i'm open for cornerCase