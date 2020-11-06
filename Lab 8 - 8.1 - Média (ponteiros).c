#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void media (double vet[], int n, int *i){
    int j, a;
    double soma=0, med, dif[n], menor;
    for(j=0; j < n; j++){
        soma = soma + vet[j];
    }
    printf("%lf\n", soma);
    med = soma/n;
    printf("%lf\n", med);

    for(j=0; j < n; j++){
        dif[j] = fabs(med - vet[j]);
        printf("%lf\n", dif[j]);
    }
    menor = dif[0];
    for(j=1; j < n; j++){
        if(dif[j] < menor){
            menor = dif[j];
        }
    }
    printf("%lf\n", menor);
    for(j=0; j < n; j++){
        if(menor == dif[j]){
            *i = j;
        }
    }
}

int main(){
    int p, n, k;
    /* Obter valores a partir do teclado */
    scanf("%d", &n);

    double m[n];
    for(k=0; k < n; k++){
        scanf("%lf", &m[k]);
    }

    media(m, n, &p);
    printf("%d", p);
    return 0;
}
