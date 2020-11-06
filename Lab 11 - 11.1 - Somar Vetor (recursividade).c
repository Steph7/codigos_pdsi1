#include <stdio.h>
#include <stdlib.h>

int soma (int vetor[], int tamanho_vetor){
    int i, soma=0;
    for(i=0; i < tamanho_vetor; i++){
        soma = soma + vetor[i];
    }
    printf("%d", soma);
}

int main(){
    int n, i;
    int *v = (int *) malloc(n* sizeof(int));
    scanf("%d", &n);
    for(i=0; i < n; i++){
        scanf("%d", &v[i]);
    }
    soma(v, n);
    return 0;
}
