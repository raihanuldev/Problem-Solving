#include <stdio.h>
#include <string.h>
// worng testCase 
int main()
{    int a,b;
    scanf("%d %d", &a,&b);
    char s[100];
    scanf("%s",&s);

    // maybe cornercase
    if(1>a || a>b){
        printf("No\n");
        return 0;
    }

    if(strlen(s) != a+b+1){
        printf("No\n");
        return 0;
    }
    // Check if all other characters are digits
    for (int i = 0; i < a + b + 1; i++) {
        if (i != a && !isdigit(s[i])) {
            printf("No\n");
            return 0;
        }
    }
    if(s[a]=='-'){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}