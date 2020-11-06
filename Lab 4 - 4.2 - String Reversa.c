#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i, n;
    char s1[20], s2[20];
    fgets(s1, 20, stdin);
    n = strlen(s1)-1;
    for(i=0; i < strlen(s1); i++){
        s2[i] = s1[n-i];
    }
    s2[i] = '\0';
    printf("%s \n", s2);
    system("pause");
    return 0;
}
