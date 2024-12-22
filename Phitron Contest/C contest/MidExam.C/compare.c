#include <stdio.h>
#include <string.h>

int main(){
    
    char s1[1001], s2[1001], s3[1001];
    char min[1001], max[1001];

    scanf("%s %s %s", s1, s2, s3);

    strcpy(min, s1);
    strcpy(max, s1);

    if (strcmp(s2, min) < 0) {
        strcpy(min, s2);  
    }
    if (strcmp(s2, max) > 0) {
        strcpy(max, s2); 
    }

    if (strcmp(s3, min) < 0) {
        strcpy(min, s3);  
    }
    if (strcmp(s3, max) > 0) {
        strcpy(max, s3);  
    }

    printf("%s\n", min);
    printf("%s\n", max);

    return 0;
}
