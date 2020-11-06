#include <stdio.h>
#include <stdlib.h>
int main(){
    int c1;
    scanf("%d", &c1);
    int a[c1];
    int i, j;
    /*ADES */
    for (i=0; i<c1;i++){
        scanf("%d", &a[i]);
    }
    int c2;
    scanf("%d",&c2);
    int c[c2];
    /*Cálculo */
    for(j=0;j<c2;j++){
        scanf("%d",&c[j]);
    }
    int n;
    for (i=0; i<c1; i++){
        for(j=0;j<c2;j++){
            if(a[i]==c[j]){
                n = a[i];
                printf("%d \n", n);
            }
        }
    }
    system("pause");
    return 0;
}
