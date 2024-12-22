#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    // seocund pattern
    for (int i = n-1; i >= 1; i--)
    
    {
        for(int space = 1; space<=n-i;space++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}