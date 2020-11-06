#include <stdio.h>
#include <stdlib.h>
/* Realizar a contagem dos termos de um intervalo específico*/
int main(){
    int x;
    for (x=228; x<=452;){
        if ((x < 300) || (x > 400)){
            x = x + 5;
            printf("%d \n", x);
        }
        else{
            do {
                x = x + 3;
                printf("%d \n", x);
            } while ((x >= 300) && (x <= 400));
        }
    }
    system("pause");
    return 0;
}
