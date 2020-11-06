#include <stdio.h>
#include <stdlib.h>
void primos(int m, int *p1, int *p2){
    long long int i, j, cont=0, k=0;
    long long int a = 2*m;
    long long int pri[a];
    for (i=0; i < a; i++){
        for(j=1; j < a; j++){
            if(i%j==0){
                cont++;
            }
        }
        if ((i>=2)&&(cont <=2)){
            pri[k] = i;
            printf("%d \n", pri[k]);
            k++;
        }
    }
    int menor, maior;
    for(k=0; k < a; k++){
        if(pri[k] > m){
            maior = pri[k];
        }
    }
    printf("%d\n", maior);
    p1 = &maior;
    for(k=a; k < m; k--){
        if(pri[k] < m){
            menor = pri[k];
        }
    }
    printf("%d\n", menor);
    p2 = &menor;

}

int main(){
    int m, p1, p2;
    scanf("%d", &m);
    primos(m, &p1, &p2);
    printf("%d\n", p1);
    printf("%d\n", p2);

    return 0;
}
