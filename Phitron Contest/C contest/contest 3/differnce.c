#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int *aPointer = &a;
    int *bPointer = &b;
    int diff = *aPointer-*bPointer;
    printf("%d",abs(diff));
    
    return 0;
}