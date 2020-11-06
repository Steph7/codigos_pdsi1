#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct produto{
    char nome[50];
    char marca[50];
    float preco;
};
int main(){
    struct produto p[8];
    int m=0, i, j, k;
    float media=0;
    char nome_marca[8][50];
    float media_marca[8];
    int quant_marca[8] = {0,0,0,0,0,0,0,0};

    while(scanf("%s %s %f", &p[m].nome, &p[m].marca, &p[m].preco)!= EOF){
        media = media + p[m].preco;
        m++;
    }
    for(j=0; j < 8; j++){
        for(i=0; i < 8; i++){
            for(k=0; k < 8; k++){
                if(strcmp(p[j].marca,p[i].marca)==0){
                    if(strcmp(p[j].marca, nome_marca[k])!=0){
                        if(strcmp(p[i].marca, nome_marca[k])!=0){
                            quant_marca[j] = quant_marca[j] + 2;
                            strcpy(nome_marca[j], p[j].marca);
                            media_marca[j] = media_marca[j] + p[j].preco + p[i].preco;
                        }
                        if((strcmp(p[j].marca, nome_marca[k])==0)||(strcmp(p[j].marca, nome_marca[k])==0)){
                            quant_marca[j] = quant_marca[j] + 2;
                            media_marca[j] = media_marca[j] + p[j].preco + p[i].preco;
                        }
                    }
                }
            }
        }
    }
    for(j=0; j<8; j++){
            if(quant_marca[j] != 0){
                printf("%s %d \n", nome_marca[j], quant_marca[j]);
            }
    }
    media = media/8;
    printf("media total %.2f \n", media);

    for(j=0; j<8; j++){
        if(quant_marca[j] != 0){
            media_marca[j] = media_marca[j] / quant_marca[j];
            printf("media %s %.2f \n", nome_marca[j], media_marca[j]);
        }
    }

    system("pause");
    return 0;
}
