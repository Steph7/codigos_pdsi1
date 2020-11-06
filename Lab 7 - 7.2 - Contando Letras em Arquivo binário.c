#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char nome[50];
    unsigned long long int i=0, n=0;
    scanf("%s", &nome);
    FILE *arq;
    arq = fopen(nome, "rb");
    char entrada;
    char c;
    for(n=0; n < 10000000; n++){
        entrada = fgetc(arq);
        if(entrada=='a')
            i++;
    }
    fclose(arq);
    printf("%llu\n", i);
    system("pause");
    return 0;
}
