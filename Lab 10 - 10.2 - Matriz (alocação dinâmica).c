#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, k, i, j;
    int *m = (int * ) malloc(n * k * sizeof(int));
    scanf("%d", &n);
    getchar();
    scanf("%d", &k);
    for(i=0; i < n; i++){
        for(j=0; j < k; j++){
            scanf("%d", &m[i * k + j]);
            getchar();
        }
    }
    for(i=0; i < n; i++){
        for(j=0; j < k; j++){
            printf("%d ", m[i * k + j]);
        }
        printf("\n");
    }
    free(m);
    return 0;
}
