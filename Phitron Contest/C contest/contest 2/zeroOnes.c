#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];
    int zero=0;
    int one=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(numbers[i]==1){
            one++;
        }
        if (numbers[i]==0){
            zero++;
        }
    }
    printf("%d %d", zero, one );
    return 0;
}