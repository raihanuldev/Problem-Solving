#include<stdio.h>

int main(){
    int n,x,y;
    scanf("%d %d %d",&n, &x,&y);
    int prices[n];

    for(int i =0; i<n; i++)
    {
        scanf("%d",&prices[i]); 
    }
    int count = 0;
    for(int i =0; i<n; i++)
    {
        if(prices[i]>=x && prices[i]<=y){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}