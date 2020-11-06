#include <stdio.h>
#include <stdlib.h>
void criar_vetor(int *vetor, int n){
    int i;
    for(i=0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
}

int main(){
    int n, i;
    scanf("%d", &n);
    int *p = (int *) malloc(n*sizeof(int));
    criar_vetor(p, n);

    for(i=0; i < n; i++){
        printf("%d\n", p[i]);
    }

    //free(p);
    return 0;
}
