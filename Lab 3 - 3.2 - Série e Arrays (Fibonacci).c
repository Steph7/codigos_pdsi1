#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[1000];
    int i, x;
    do {
        scanf("%d", &x);
        for (i=x; i<1000;i++){
            for (i=0;i<1000;i++){
                if (i==0)
                    mat[i]= 0;
                else if(i==1)
                    mat[i]=1;
                else if (i >= 2)
                    mat [i]= mat[i-1]+ mat[i-2];
                else
                    break;
            }
        }
        printf("%d \n", mat[x]);
    } while((x > 0)&&(x < 1000));
    system("pause");
    return 0;
}
