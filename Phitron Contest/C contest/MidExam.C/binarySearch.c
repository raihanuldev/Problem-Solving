#include <stdio.h>

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    int a[n];

    for(int i =0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(int i=0; i<q; i++){
        int query;
        scanf("%d",&query);
        for(int j = 0; j<q; j++){
            if(query >=a[j]){
                printf("found\n");
            }else{
                printf("not found\n");
            }
        }

    }

    return 0;
}