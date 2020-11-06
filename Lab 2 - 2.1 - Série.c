#include <stdio.h>
#include <stdlib.h>
/* Receber três valores do teclado, sendo o primeiro deles a quantidade de termos da série que será construída.
Seguido do primeiro e do segundo termo. */
int main(){
    int n, x0, x1, x, xn;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de x0: ");
    scanf("%d", &x0);
    printf("Digite o valor de x1: ");
    scanf("%d", &x1);

    printf("X0:%d\n",x0);
    printf("X1:%d\n",x1);
    for(x=2 ; x<=n ; x++){
        xn = 4*(x1) - 2*(x0) ;
        printf("X%d:%d\n",x,xn);
        x0 = x1;
        x1 = xn;
    }
    system("pause");
    return 0;
}
