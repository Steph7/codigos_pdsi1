#include <stdio.h>
#include <stdlib.h>
// testa se ano e bissexto
int bissexto(int ano){
    int verdade;
    verdade = 0;
    if((ano%4==0)&&(ano%100!=0)||(ano%400==0)){
            verdade = 1;
    }
    else{
        verdade = 0;
    }
    return verdade;}

// conta número de dias ate o mesmo mes e dia no ano de 2019 ( mes/dia/2019)

long int anos_2019(int ano){
    int anos = 0;
    for(ano; ano < 2019;ano++){
        if(bissexto(ano) == 1){
            anos += 366;}
        else{
            anos += 365;
        }
    }
    return anos;
}

//contar número de dias da data ate o fim do ano ( 2019) -> vou contar como se fosse dia 1 e depois subtrair o nº do dia
int dias_meses(int dia7, int mes0){
    int contador;
    int normal[14] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i = mes0 - 1;
    for(i;i<12;i++){
            contador = contador + normal[i];}
    contador = contador - dia7;
    return contador;
}

// se for no ano de 2020 -> contar dias ate mes de setembro e depois somar 17
int dias_meses_2020(int dia8,int mes2){
    int contador = 17;
    int normal[14] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i = mes2 - 1;
    for(i;i<8;i++){
            contador = contador + normal[i];}
    contador = contador - dia8;
    return contador;
}

//dias_hoje^ + dias_meses + anos ^
int main(){
    int dias_hoje = 262;
    long int contador_final;
    contador_final += dias_hoje;
    long int numero_dias = 0;
    int mes;
    int ano0;
    int dia;
    setbuf(stdin,NULL);
    while(scanf("%d %d %d",&dia,&mes,&ano0) != EOF){
        contador_final = 0;
        if (ano0 != 2020){
            contador_final += dias_hoje;
            contador_final += anos_2019(ano0);
            contador_final += dias_meses(dia,mes);
            printf("%li\n", contador_final);
        }
        else if(ano0 == 2020){
            contador_final = dias_meses_2020(dia,mes);
            printf("%li\n", contador_final);
        }
    }
    system("pause");
    return 0;
}
