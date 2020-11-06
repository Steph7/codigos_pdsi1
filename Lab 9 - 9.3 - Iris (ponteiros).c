#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct iris{
    float comprimento_s; //Comprimento sépala
    float largura_s; // Largura sépala
    float comprimento_p; //Comprimento pétala
    float largura_p; //Largura pétala
    char tipo[50];
};

void ler_iris_id(struct iris id[], int n){
    int j;
    for(j=0; j < n; j++){
        scanf("%f %f %f %f %s", &id[j].comprimento_s, &id[j].largura_s, &id[j].comprimento_p, &id[j].largura_p, &id[j].tipo);
    }
}
void ler_iris_sem_id(struct iris sid[]){
    int j=0;
    scanf("%f %f %f %f", &sid[j].comprimento_s, &sid[j].largura_s, &sid[j].comprimento_p, &sid[j].largura_p);

}

void classificar(struct iris nao_identificada[], struct iris registros_identificados[], int n){
    int j, x=0;
    float p1, p2, p3, p4, soma;
    float dist_euclidiana[n];
    for(j=0; j < n; j++){
        p1 = (nao_identificada[0].comprimento_s - registros_identificados[j].comprimento_s);
        //printf("%.1f\n", p1);
        p1 = (float) pow (p1,2);
        //printf("%.2f\n", p1);
        p2 = (nao_identificada[0].largura_s - registros_identificados[j].largura_s);
        //printf("%.1f\n", p2);
        p2 = (float) pow (p2,2);
        //printf("%.2f\n", p2);
        p3 = (nao_identificada[0].comprimento_p - registros_identificados[j].comprimento_p);
        //printf("%.1f\n", p3);
        p3 = (float) pow (p3,2);
        //printf("%.2f\n", p3);
        p4 = (nao_identificada[0].largura_p - registros_identificados[j].largura_p);
        //printf("%.1f\n", p4);
        p4 = (float) pow (p4,2);
        //printf("%.2f\n", p4);
        soma = p1 + p2 + p3 + p4;
        //printf("%.2f\n", soma);
        dist_euclidiana[j] = sqrt(soma);
        //printf("D: %.2f\n", dist_euclidiana[j]);
    }
    float menor = dist_euclidiana[0];
    for(j=0; j < n; j++){
        if(dist_euclidiana[j] < menor){
            menor = dist_euclidiana[j];
            x = j;
        }
    }
    //printf("X: %d\n", x);
    //printf("J: %d\n", j);
    //printf("D: %.2f\n", dist_euclidiana[x]);
    printf("%s\n", registros_identificados[x].tipo);
}


int main(){
    int n, j;
    scanf("%d", &n);
    struct iris i[n];
    struct iris sem_id[1];
    ler_iris_id(i, n);
    ler_iris_sem_id(sem_id);
    classificar(sem_id, i, n);
    return 0;
}
