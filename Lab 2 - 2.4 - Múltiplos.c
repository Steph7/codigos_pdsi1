#include <stdio.h>
#include <stdlib.h>
/* Determinar a quantidade de n�meros que s�o m�ltiplos de 2, 3, 5, e de todos esses simultaneamento
dentro do intervalo definido pelo usu�rio. */
int main(){
    int x, y=1, i=0, j=0, k=0, m=0;
    scanf("%d",&x);
    while(y != x+1){
            if(y%2==0)
                i += 1;
            if(y%3==0)
                j += 1;
            if(y%5==0)
                k += 1;
            if((y%2 == 0) && (y%3 == 0) && (y%5 == 0))
                m +=1;
            y++;
    }
    printf("M�ltiplos de 2: %d \n",i);
    printf("M�ltiplos de 3: %d \n", j);
    printf("M�ltiplos de 5: %d \n", k);
    printf("M�ltiplos de todos: %d \n", m);
    system("pause");
    return 0;
}

