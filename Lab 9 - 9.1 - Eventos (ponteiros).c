#include <stdio.h>
#include <stdlib.h>
struct data{
    int dia;
    enum mes {
        janeiro = 1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, devezembro
    } mes;
    int ano;
};
struct evento{
    char nome[100];
    char local[100];
    struct data dat;
};
void cadastrar_eventos(struct evento agenda[], int n){
    int i;
    for(i=0; i < n; i++){
        scanf("%s %s %d %d %d", &agenda[i].nome, &agenda[i].local, &agenda[i].dat.dia, &agenda[i].dat.mes, &agenda[i].dat.ano);
    }
}
void imprimir_eventos(struct evento agenda[], struct data d, int n){
    int i, s=0;
    for(i=0; i < n; i++){
        if(d.dia == agenda[i].dat.dia){
            if(d.mes == agenda[i].dat.mes){
                if(d.ano == agenda[i].dat.ano){
                    printf("%s %s\n", agenda[i].nome, agenda[i].local);
                    s += 1;
                }
            }
        }
    }
    if(s==0){
        printf("Nenhum evento encontrado!");
    }
}

int main(){
     int n;
     struct data dta;
     scanf("%d", &n);
     struct evento agenda[n];
     cadastrar_eventos(agenda, n);
     scanf("%d %d %d", &dta.dia, &dta.mes, &dta.ano);
     imprimir_eventos(agenda, dta, n);

    return 0;
}
