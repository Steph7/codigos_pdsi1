#include <stdio.h>
#include <stdlib.h>
int main (){
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    int x[m][n];
    int i, j;
    int oposta[m][n];
    for(i=0; i<m;i++){
        for(j=0; j<n;j++){
            scanf("%d \n", &x[i][j]);
            oposta[i][j] =-1*x[i][j];
        }
    }
    for(i=0; i < m; i++){
        for(j=0; j < n; j++)
            printf("%d ", oposta[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}
