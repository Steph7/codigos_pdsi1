#include <stdio.h>
#include <stdlib.h>
int main(){
    int A, B;
    int i, j;
    int cont=0;
    scanf("%d", &A);
    if (A < 0 || A > 10000){
        scanf("%d", &A);
    }
    else {
    scanf("%d", &B);
        if (B <= A || B >10000){
            scanf("%d", &B);
        }
        else {
            for (i=A; i < B; i++){
                for(j=1; j<B; j++){
                    if(i%j==0){
                        cont++;
                    }
                }
                if ((i>=2)&&(cont <=2)){
                    printf("%d \n", i);
                }
                cont =0;


            }
        }
    }
    system("pause");
    return 0;
}
