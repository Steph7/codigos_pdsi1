#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct dados{
    char nome[50];
    int idade;
    float salario;
};

int main(){
    int i=0, j, m=0;
    char n[50];
    char entrada[8];
    char mostrar[8] = "mostrar";
    char inserir [8] = "inserir";
    struct dados d[5];

    while(scanf("%s", &entrada)!= EOF){
        if(strcmp(entrada, inserir)==0){
            if(i < 4){
                scanf("%s %d %f", &d[i].nome, &d[i].idade, &d[i].salario);
                printf("Registo %s %d %.2f inserido\n", d[i].nome, d[i].idade, d[i].salario);
                i++;
            }
            else {
                printf("Espaco insuficiente\n");
            }
        }
        if(strcmp(entrada, mostrar)==0){
            scanf("%s", &n);
            getchar();
            for(j=0; j < 4; j++){
                if(strcmp(n,d[j].nome)==0){
                    printf("Registro %s %d %.2f \n", d[j].nome, d[j].idade, d[j].salario);
                }
                else{
                    m++;
                }
            }
            if(m>=5) {
                printf("Registro Ausente\n");
            }
        }
    }
    system("pause");
    return 0;
}
