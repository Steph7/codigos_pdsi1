#include <stdio.h>
#include <stdlib.h>
int main (){
    int c, l;
    scanf("%d", &c);
    scanf("%d", &l);
    int x[c][l];
    int i, j, maior;
    for(i=0; i<c;i++){
        for(j=0; j<l;j++){
            scanf("%d \n", &x[i][j]);
                if (i == 0 && j == 0){
                    maior=x[0][0];
                }
                if(x[i][j]>maior){
                    maior=x[i][j];
                }
        }
    }
    printf("%d \n", maior);
    system("pause");
    return 0;
}
