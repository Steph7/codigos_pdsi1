#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct agenda{
    char nome[50];
    int idade;
    char telefone[20];
};

int main(int argc, char *argv[]){
    char nome[100];
    scanf("%s", &nome);
    FILE *arq;
    arq = fopen(nome, "rb+");
    int x, r=0, i, j, m, k, s, l, v;
    char n[50];
    char entrada[8];
    char inserir[8] = "Inserir";
    char alterar [8] = "Alterar";
    char excluir[8] = "Excluir";
    char exibir[8] = "Exibir";
    struct agenda a[100];
    do{
        x = fread(&a[r], sizeof(struct agenda), 1, arq);
        r++;
    } while(x==1);
    while(scanf("%s", &entrada)!= EOF){
        if(strcmp(entrada, inserir)==0){
            if(i < 100){
                scanf("%s %d %s", &a[i].nome, &a[i].idade, &a[i].telefone);
                printf("Registo %s %d %s inserido\n", a[i].nome, a[i].idade, a[i].telefone);
                i++;
            }
            else {
                printf("Espaco insuficiente\n");
            }
        }
        if(strcmp(entrada, exibir)==0){
            scanf("%s", &n);
            getchar();
            for(j=0; j < 100; j++){
                if(strcmp(n, a[j].nome)==0){
                    printf("Registo %s %d %s exibido\n", a[j].nome, a[j].idade, a[j].telefone);
                    m++;
                }
            }
            if(m==0) {
                printf("Registro %s invalido\n", n);
            }
        }
        if(strcmp(entrada, alterar)==0){
            scanf("%s", &n);
            getchar();
            for(k=0; k < 100; k++){
                if(strcmp(n,a[k].nome)==0){
                    scanf("%d %s", &a[i].idade, &a[i].telefone);
                    printf("Registro %s %d %s alterado\n", a[k].nome, a[k].idade, a[k].telefone);
                    s++;
                }
            }
            if(s==0){
                printf("Registro %s invalido\n", n);
            }
        }
        if(strcmp(entrada, excluir)==0){
            scanf("%s", &n);
            getchar();
            for(l=0; l < 100; l++){
                if(strcmp(n,a[l].nome)==0){
                    printf("Registro %s %d %s excluido\n", a[l].nome, a[l].idade, a[l].telefone);
                    strcpy(a[l].nome,"sem registro");
                    a[l].idade = 0;
                    strcpy(a[l].telefone, "sem registro");
                    v++;
                }
            }
            if(v==0){
                printf("Registro %s invalido\n", n);
            }
        }
    }
    fclose(arq);
    return 0;
}
