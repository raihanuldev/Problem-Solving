#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int books[n];
    int t;
    scanf("%d", &t);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &books[i]);
    }
    int count = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {

        if (sum + books[i] <= t) {
            sum += books[i];
            count++;
        } else {
            break;  
        }
    }

    printf("%d\n", count);
    return 0;
}