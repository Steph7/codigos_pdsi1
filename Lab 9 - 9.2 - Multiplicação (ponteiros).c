#include <stdio.h>
#include <stdlib.h>
void imprime(int vetor[], int n){
    int i;
    for(i=0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
void multiplica(int vetor[], int n, double v){
    int i;
    for(i=0; i < n; i++){
        vetor[i] = vetor[i] * v;
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){
    int n, i;
    double v;
    scanf("%d", &n);
    int s[n];
    int p[n];
    for(i=0; i < n; i++){
        scanf("%d", &s[i]);
        p[i] = s[i];
    }
    imprime(s, n);
    scanf("%le", &v);
    multiplica(s, n, v);
    imprime(p, n);
    return 0;
}
