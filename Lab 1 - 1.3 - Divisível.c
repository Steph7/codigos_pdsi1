#include <stdio.h>
#include <stdlib.h>
/* Receber tr�s valores do teclado e verificar se o primeiro � m�ltiplo dos demais.  */
int main(){
int x, y, z;
    printf("Digite o valor de x: ");
    scanf("%d",&x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);
    if (x % y == 0 && x % z == 0) {
        printf("O n�mero � divis�vel.");
    }
    else {
        printf("O n�mero n�o � divis�vel.");
    }
    system("pause");
    return 0;
}
