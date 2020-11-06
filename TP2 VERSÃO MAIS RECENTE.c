#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definir a função para comparar se dois números são iguais
#define NUMCMP(x,y) (((x) < (y)) ? -1 : ((x) > (y)) ? 1 : 0)


//Definição da estrutura DATA
 struct data{
    int dia;
    int mes;
    int ano;
};

//Definição da estrutura FUNCIONÁRIO
struct funcionario{
    char nome[100];
    double salario;
    struct data dat;
    char setor[20];
};

/* ============================= FUNÇÕES ================================== */

void alfabetica(struct funcionario *c[], int n);
void media_salario_dept (struct funcionario *vetor[], int n, char *departamento);


/*===================== FUNCIONÁRIO MAIS ANTIGO =========================== */

int compar_data_admissao(const struct funcionario *vetor, const struct funcionario *vetor2){
    struct data data1 = vetor->dat;
    struct data data2 = vetor2->dat;
    int tmp;
    if((tmp=NUMCMP(data1.ano, data2.ano))==0){
        if((tmp=NUMCMP(data1.mes, data2.mes))==0)
            return NUMCMP(data1.dia, data2.dia);
        else
            return tmp;
    } else
        return tmp;
}

struct funcionario *mais_antigo(struct funcionario *vetor, int n){
    struct funcionario *antigo = vetor;
    int i;
    for(i = 1;i<n;++i){
        if(compar_data_admissao(antigo, &vetor[i])>0)
            antigo = &vetor[i];
    }
    return antigo;
}

struct funcionario *mais_antigo_depto(struct funcionario *vetor, int n, char *departamento){
    struct funcionario *antigo = vetor;
    int i;
    for(i = 1;i<n;++i){
        if(departamento == vetor[i].setor){
            if(compar_data_admissao(antigo, &vetor[i])>0)
                antigo = &vetor[i];
        }
    }
    return antigo;
}



/*=========================== MAIN =================================== */

int main(int argc, char* argv[]){
    int q;
    FILE *arq3;
    arq3 = fopen(argv[1], "r");

    if(argv[1] == NULL){
        printf("Erro ao ler arquivo!");
        exit(1);
    }

    fscanf(arq3, "%d", &q);
    //printf("%d", q);

    int i, j;
    char nome[100];
    int d, m, a;
    double salario, soma=0, media=0;
    char setor[20];
    struct funcionario *c = (struct funcionario *) malloc(q* sizeof(struct funcionario));


    for(i=0; i < q; ){
          fgets(nome, 100, arq3);
          getchar();
          fscanf(arq3, "%lf", &salario);
          fscanf(arq3, "%d/%d/%d", &d, &m, &a);
          fgets(setor, 20, arq3);
          getchar();

          strcpy(c[i].nome, nome);
          c[i].salario = salario;
          c[i].dat.dia = d;
          c[i].dat.mes = m;
          c[i].dat.ano = a;
          strcpy(c[i].setor, setor);

          i++;
    }


    /* Calcular a Soma Total dos Salários */
    for(i=0; i < q; i++){
        soma = soma + c[i].salario;
    }
    //printf("Soma: %.2f\n", soma);

    /* Calcular Média dos Salários */
    media = soma/q;
    //printf("Media: %.2f\n", media);


    /* Visualizar Dados Armazenados na Struct para Conferir */
    /*
    for(i=0; i < q; i++){
        printf("%s\n", c[i].nome);
        printf("%.2f\n", c[i].salario);
        printf("%d/%d/%d\n", c[i].dat.dia, c[i].dat.mes, c[i].dat.ano);
        printf("%s\n", c[i].setor);
    }
    */



    ///////////// IDENTIFICAR E SELECIONAR AÇÃO ARGV /////////////////

    char *parametro = argv[0];
    char *parametro2 = argv[1];
    int entrada = atoi(argv[2]);
    char *entrada2 = argv[3];

    /* CONFERIR PARÂMETROS PASSADOS NA LINHA DE COMANDO */
    //printf("%s\n", parametro);
    //printf("%s\n", parametro2);
    //printf("%d\n", entrada);
    //printf("%s\n", entrada2);

    if( argc > 1){
        if(entrada == 1){
            //Organizar lista em ordem alfabética e salvar no arquivo output.txt (passado em argv[3])
            printf("TESTE 1");
            FILE *arq;
            arq = fopen(entrada2, "w+");
            alfabetica(&c, q);
            for(i=0; i < q; i++){
                fprintf(arq, "%s\n", c[i].nome);
                fprintf(arq, "%.2f\n", c[i].salario);
                fprintf(arq, "%d/%d/%d\n", c[i].dat.dia, c[i].dat.mes, c[i].dat.ano);
                fprintf(arq, "%s\n", c[i].setor);
            }
            fclose(arq3);
        }

        if(entrada == 2){
            //Organizar lista em ordem alfabética referente ao funcionários do departamento em questão
            printf("TESTE 2");
            if(entrada2 == c[i].setor){
                alfabetica(&c, q);
                for(i=0; i < q; i++){
                    printf("%s\n", c[i].nome);
                    printf("%.2f\n", c[i].salario);
                    printf("%d/%d/%d\n", c[i].dat.dia, c[i].dat.mes, c[i].dat.ano);
                    printf("%s\n", c[i].setor);
                }
            }
        }

        if(entrada == 3){
            // Listar o funcionário mais ANTIGO
            struct funcionario *funcionario_mais_antigo = mais_antigo(c, q);
            printf("TESTE 3\n");
            printf("%s\n", funcionario_mais_antigo->nome);
            printf("%.2f\n", funcionario_mais_antigo->salario);
            printf("%d/%d/%d\n", funcionario_mais_antigo->dat.dia, funcionario_mais_antigo->dat.mes, funcionario_mais_antigo->dat.ano);
            printf("%s\n", funcionario_mais_antigo->setor);

        }
        if(entrada == 4){
            // Listar o funcionário mais ANTIGO por departamento
            struct funcionario *funcionario_mais_antigo_depto = mais_antigo_depto(c, q, entrada2);
            printf("TESTE 4\n");
            printf("%s\n", funcionario_mais_antigo_depto->nome);
            printf("%.2f\n", funcionario_mais_antigo_depto->salario);
            printf("%d/%d/%d\n", funcionario_mais_antigo_depto->dat.dia, funcionario_mais_antigo_depto->dat.mes, funcionario_mais_antigo_depto->dat.ano);
            printf("%s\n", funcionario_mais_antigo_depto->setor);
        }


        if(entrada == 5){
            //Calcular Média Salarial
            printf("TESTE 5");
            printf("%.2f\n", media);

        }

        if(entrada == 6){
            //Calcular Média Salarial por departamento
            printf("TESTE 6");
            media_salario_dept(&c, q, entrada2);
            printf("Média Salarial %s: %.2f\n", entrada2, media);

        }
    }

    fclose(arq3);
    free(c);
    return 0;
}

/* =============================== VOID ================================== */

/* ======================= ORDEM ALFABÉTICA =========================== */

/* Organizar Nome dos Funcionários em ordem alfabética */
void alfabetica(struct funcionario *c[], int n){
    int i, j;
    struct funcionario *temp;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(c[i]->nome, c[j]->nome)>0){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }

        }
    }
}


/*============== MÉDIA SALÁRIO DEPARTAMENTO ========================*/

void media_salario_dept (struct funcionario *vetor[], int n, char *departamento) {
    int i, j=0;
    double soma, media=0;
    for(soma=0, i=0; i< n; i++){
        if(departamento == vetor[i]->setor){
            soma = soma + vetor[i]->salario;
            j++;
        }
    }
    media = soma/j;
    //return media;
}

