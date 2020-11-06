#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int arqc, char *arqv[]){
    FILE *arq;
    char entrada;
    char c;
    unsigned long long int i=0, n=0;
    arq = fopen(arqv[1], "r");

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
