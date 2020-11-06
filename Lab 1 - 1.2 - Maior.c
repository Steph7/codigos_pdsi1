#include <stdio.h>
#include <stdlib.h>
/* Encontrar o maior valor dentre os três valores recebidos pelo teclado. */
int main(){
int x, y, z, a;
    printf("Digite o valor de x: ");
    scanf("%d",&x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);
    if (x >= y && x >= z){
        a = x;
    }
    else if (y >= x && x >= z){
        a = y;
    }
    else {
        a = z;
    }
    printf("Maior valor = %d\n", a);
    system("pause");
    return 0;
}
