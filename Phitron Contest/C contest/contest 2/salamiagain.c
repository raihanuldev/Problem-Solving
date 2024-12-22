#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int salami[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &salami[i]);
    }
    // max value
    int max = salami[0];
    for (int i = 0; i < n; i++)
    {
        if (max < salami[i])
        {
            max = salami[i];
        }
        // printf("%d \n", salami[i]);
    }
    for(int i =0; i<n; i++){
        salami[i] = max - salami[i];
    }
    printf("%d ", max);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", salami[i]);
    }
    return 0;
}