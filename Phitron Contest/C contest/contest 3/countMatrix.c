#include <stdio.h>

int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    int a[n][m];
    int frequency[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            frequency[a[i][j]]++;
        }
    }
    
    for (int i = 0; i < x; i++)
    {
        int query;
        scanf("%d", &query);
        printf("%d\n", frequency[query]);
    }
    return 0;
}