#include <stdio.h>
#include <stdlib.h>
/* Realizar a soma de todos os número dentro do intervalo definido pelo usuário.  */
int main (){
    int x, i, soma;
    printf("Digite um valor de X: ");
    scanf("%d", &x);
    for (i=1, soma=0; i <=x; i++){
        soma = soma + i;
    }
    printf("Soma: %d", soma);
    system("pause");
    return 0;
}
