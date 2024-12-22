    #include <stdio.h>


    int main(){
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n][m];

        for(int i =0; i<n; i++){
            for(int j=0; j<m;j++){
                scanf("%d", &a[i][j]);
            }
        }
        if (n != m) {
            printf("NO\n");
            return 0;
        }

        int flag = 1;

        
        for(int i =0; i<n;i++){
            for(int j =0; j<m; j++){
                if(i==j){
                    if(a[i][j] != 1){
                        flag =0;
                        break;
                    }
                }
                else if (i + j == n - 1) {
                    if (a[i][j] != 1) {
                        flag = 0;
                        break;
                    }
                }
                else{
                    if(a[i][j] !=0){
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if (flag == 1) {
            printf("YES\n"); 
        } else {
            printf("NO\n");
        }
    }
