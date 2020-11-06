#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int k, n;
    /*Quantidade de jogos realizados */
    /*printf("Digite o número da partida: "); */
    scanf("%d", &n);
    /* A pessoa só pode jogar de 1 a 10 rodadas, se n > 10, o loop se encerra */
    while (k < n){
        int i, j, a, b, m=0, d, e, p=0, conta = 0, enc = 0;
        /* printf("Digite o tamanho do tabuleiro: "); */
        scanf("%d", &i);
        char tab[i][i];
        /* O tabuleiro deve ser uma matriz quadrada  */
        if((i>=2) && (i<=100)){
        /* Definição do tabuleiro, onde x são espaços vazios e b são bombas */
            for(a=0; a < i; a++){
                for(b=0; b < i; b++){
                    /* printf("Digite os valores do tabuleiro: "); */
                    scanf("%s", &tab[a][b]);

                    /* Contar a quantidade de x's no tabuleiro*/
                    if(tab[a][b]=='x'){
                        conta++;
                    }
                }getchar();
            }
        }

        /* Quantas jogadas serão realizadas? */
        /* printf("Quantas jogadas terão nessa partida? "); */
        scanf("%d", &j);

        /*Coordenadas de cada jogada */
        for(m=0; m < j; m++){
            /* printf("Coordenadas: "); */
            scanf("%d %d", &d, &e);
            /* Se for encontrada uma bomba, o jogo acaba aqui */
            if((tab[d][e] == 'b')&& (p ==0)){
                printf("PERDEU\n");
                p++;
            }
            /* Se for encontrado um espaço vazio(x), o jogo continua */
            else if(tab[d][e] != 'b'){
                tab[d][e] ='s';
                /* Se existirem 4 vizinhos diretos para a coordenada x[d][e] */
                if ((tab[d][e-1] != 'b')||(e-1 < 0)){
                    if((tab[d+1][e] != 'b')||(d+1 > i)){
                        if((tab[d-1][e] != 'b')||(d-1 < 0)){
                            if ((tab[d][e+1] != 'b')||(e+1 > i)){
                                if ((tab[d-1][e+1] != 'b')||(d-1 < 0)||(e+1 > i)){
                                    if ((tab[d+1][e+1] != 'b')||(d+1 > i)||(e+1 > i)){
                                        if((tab[d+1][e-1] != 'b')||(d+1 > i)||(e-1 < 0)){
                                            if((tab[d-1][e-1] != 'b')||(d-1 < 0)||(e-1 < 0)){
                                                (e-1 >= 0) ? tab[d][e-1] = 's': 0;
                                                (d+1 < i) ? tab[d+1][e] = 's': 0;
                                                (d-1 >= 0) ? tab[d-1][e] = 's': 0;
                                                (e+1 < i) ? tab[d][e+1] = 's': 0;
                                                ((d-1 >= 0)&&(e+1 < i)) ? tab[d-1][e+1] = 's': 0;
                                                ((d+1 < i)&&(e+1 < i)) ? tab[d+1][e+1] = 's': 0;
                                                ((d+1 < i)&&(e-1 >= 0)) ? tab[d+1][e-1] = 's': 0;
                                                ((d-1 >= 0)&&(e-1 >= 0)) ? tab[d-1][e-1] = 's': 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }
        }
        for(a=0; a < i; a++){
            for(b=0; b < i; b++){
            /* Contar a quantidade de s's no tabuleiro*/
                if(tab[a][b] == 's')
                enc++;
            }
        }
        /* Se todos os x's forem encontrados */
        if ((p==0) && (enc != 0)){
            if(enc == conta){
            printf("GANHOU\n");
            }
            /* Se nem todos os x's forem encontrados */
            else{
                printf("FALTOU TERMINAR\n");
            }
        }
        k++;
    }

    return 0;
}
