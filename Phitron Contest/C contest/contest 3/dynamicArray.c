#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *arr = malloc(1 * sizeof(int));

    for(int i =0; i<n; i++){
        arr = realloc(arr, (i + 1) * sizeof(int));
        scanf("%d",&arr[i]);
    }

    for(int i =0; i<n; i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}