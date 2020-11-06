#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int arqc, char**arqv[]){
    char nome[50];
    long int mat[5][5];
    long int mat2[5][5];
    long int soma[5][5];
    long int i=0, n=0;
    scanf("%s", &nome);
    FILE *arq;
    arq = fopen(nome, "r+b");
    for (n=0; n < 5; n++){
        for(i=0; i < 5; i++){
            fscanf(arq, "%ld", &mat[n][i]);
            getchar();
        }
    }
    for (n=0; n < 5; n++){
        for(i=0; i < 5; i++){
            fscanf(arq, "%ld", &mat2[n][i]);
            getchar();
        }
    }
    for (n=0; n < 5; n++){
        for(i=0; i < 5; i++){
            soma[n][i] = mat[n][i] + mat2[n][i];
            getchar();
            printf("%ld\n", soma[n][i]);
        }
        printf("\n");
    }
    fclose(arq);
    system("pause");
    return 0;
}
