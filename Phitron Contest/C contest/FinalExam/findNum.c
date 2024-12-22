#include <stdio.h>

int main() {
    int tcase;
    scanf("%d", &tcase);
    
    long long M, A, B, C;
    for (int i = 0; i < tcase; i++) {
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        
        long long multipicaton = A * B * C;
        
        if (multipicaton == 0) {
            if (M == 0) {
                printf("0\n");
            } else {
                printf("-1\n"); 
            }
        } else {
            if (M % multipicaton == 0) {
                long long D = M / multipicaton;
                printf("%lld\n", D);
            } else {
                printf("-1\n");
            }
        }
    }
    
    return 0;
}
