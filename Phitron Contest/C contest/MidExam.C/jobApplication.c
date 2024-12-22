#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i =0; i<n; i++)
    {
        int exprience;
        scanf("%d ",&exprience);
        
        if(exprience > 7){
            printf("Senior candidate\n");
        }else if(exprience <= 7 && exprience >=4){
            printf("Mid-level candidate\n");
        }else if(exprience <= 3 && exprience >= 1){
            printf("Junior candidate\n");
        }else{
            printf("Entry-level candidate\n");
        }
        
    }

    return 0;
}