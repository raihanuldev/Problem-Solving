#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int frequency[100001] = {0};
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //max
    int max = 0;
    for(int i =0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
            // printf("%d",max);
        }
    }

    for(int i =0; i<n; i++){
        frequency[arr[i]] ++;
    }
    int count =0;
    for(int i =0; i<=max; i++){
        if(frequency[i] ==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}