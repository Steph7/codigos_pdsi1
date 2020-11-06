#include <stdio.h>
#include <stdlib.h>
/* O objetivo desse código é receber um valor inserido pelo usuário,
e organizar de acordo com a quantidade de cédulas de cada tipo que ele
deve receber ao realizar um saque, visando ter o valor exato. */

int main(){
int x;
float x1,x2,x3,x4,x5,x6,x7;
    printf("Digite o valor em reais: ");
    scanf("%d", &x);
    if (x/100 >= 1 || x/100 == 0){
        x1 = x/100;
        printf("100: %.0f\n", x1);
        if ((x%100)/50 >= 1 || (x%100)/50 == 0){
            x2 = (x%100)/50;
            printf("50: %.0f\n", x2);
            if ((((x%100)%50)/20) >= 1 || ((x%100)%50)/20 == 0){
                x3 = ((x%100)%50)/20;
                printf("20: %.0f\n", x3);
                if (((((x%100)%50)%20)/10) >= 1 || ((((x%100)%50)%20)/10) == 0) {
                    x4 = (((x%100)%50)%20)/10;
                    printf("10: %.0f\n", x4);
                    if ((((((x%100)%50)%20)%10)/5) >= 1 || ((((x%100)%50)%20)%10)/5 == 0){
                        x5 = ((((x%100)%50)%20)%10) /5;
                        printf("5: %.0f\n", x5);
                        if ((((((x%100)%50)%20)%10)%5)/2 >= 1 || (((((x%100)%50)%20)%10)%5)/2 == 0){
                            x6 = (((((x%100)%50)%20)%10)%5) / 2;
                            printf("2: %.0f\n", x6);
                            if (((((((x%100)%50)%20)%10)%5)%2)/1 >= 1 || ((((((x%100)%50)%20)%10)%5)%2)/1 == 0){
                                x7 = ((((((x%100)%50)%20)%10)%5)%2) /1;
                                printf("1: %.0f\n", x7);
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}
