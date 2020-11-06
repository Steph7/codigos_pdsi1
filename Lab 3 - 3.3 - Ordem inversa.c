#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10];
    int b[10];
    int i, j;
    for (i=0; i <10; i++){
        scanf("%d", &a[i]);
        b[9-i]=a[i];
    }
    for(j=0; j<10; j++){
        printf("%d \n", b[j]);
    }
    system("pause");
    return 0;
}
