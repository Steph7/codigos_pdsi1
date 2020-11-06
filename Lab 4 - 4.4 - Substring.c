#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i,j, n, x=0;
    char s1[20], s2[20];
    fgets(s1, 20, stdin);
    fgets(s2, 20, stdin);

    for (i=0; i< strlen(s1); i++){
        for(j=0; j < strlen(s2); j++){
            if(s1[i]==s2[j]){
            x++;
            }
        }
    }

    n = strlen(s2);

    if(x > n){
        printf("É substring \n");
    }
    else {
        printf("Não é substring \n");
    }
    system("pause");
    return 0;
}
