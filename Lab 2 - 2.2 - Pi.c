#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Encontrar o valor de Pi pela f�rmula de aproxima��o de Gregory-Leibniz.
A partir disso determinar quantos termos devem existir na s�rie para que essa
aproxima��o seja da ordem de precis�o inserida pelo usu�rio. */
int main(){
    double pi=4, deno=3, x;
    scanf("%lf",&x);
    double d = pi - M_PI;
    int  i=1;
    while (d > x){
        if(i%2 ==0)
            pi = pi +(double)4.0/(deno);
        else
            pi = pi - (double)4/(deno);
        d = pi - M_PI;
        if(d < 0)
            d = d * (-1);
        deno +=2;
        i++;
    }
    printf("%d \n", i);
    system("pause");
    return 0;
}
