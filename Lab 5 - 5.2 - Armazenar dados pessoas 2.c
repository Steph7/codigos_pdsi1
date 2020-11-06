#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct endereco{
    char rua[50];
    int numero;
    char estado[50];
};
struct dados{
    char nome[50];
    int idade;
    float salario;
    struct endereco e;
};

int main(){
    int i=0, j=0, m=0, k=0, s=0;
    char n[50];
    char a[50];
    char entrada[8];
    char mostrar[8] = "mostrar";
    char inserir[8] = "inserir";
    char alterar[8] = "alterar";
    struct dados d[6];

    while(scanf("%s", &entrada)!= EOF){
        if(strcmp(entrada, inserir)==0){
            if(i < 4){
                scanf("%s %d %f %s %d %s", &d[i].nome, &d[i].idade, &d[i].salario, &d[i].e.rua, &d[i].e.numero, &d[i].e.estado);
                printf("Registo %s %d %.2f %s %d %s inserido\n", d[i].nome, d[i].idade, d[i].salario, d[i].e.rua, d[i].e.numero, d[i].e.estado);
                i++;
            }
            else {
                printf("Espaco insuficiente\n");
            }
        }
        if(strcmp(entrada, mostrar)==0){
            scanf("%s", &n);
            getchar();
            for(j=0; j < 5; j++){
                if(strcmp(n,d[j].nome)==0){
                    printf("Registro %s %d %.2f %s %d %s\n", d[j].nome, d[j].idade, d[j].salario, d[j].e.rua, d[j].e.numero, d[j].e.estado);
                }
                else{
                    m++;
                }
            }
            if(m>=6) {
                printf("Registro Ausente\n");
            }
        }
        if(strcmp(entrada, alterar)==0){
            scanf("%s", &a);
            getchar();
            for(k=0; k < 5; k++){
                if(strcmp(a,d[k].nome)==0){
                    scanf("%d %f %s %d %s", &d[k].idade, &d[k].salario, &d[k].e.rua, &d[k].e.numero, &d[k].e.estado);
                    printf("Registro %s %d %.2f %s %d %s alterado\n", d[k].nome, d[k].idade, d[k].salario, d[k].e.rua, d[k].e.numero, d[k].e.estado);
                }
                else{
                    s++;
                }
            }
            if(s>=6){
                printf("Registro ausente para alteracao\n");
            }
        }
    }
    system("pause");
    return 0;
}
