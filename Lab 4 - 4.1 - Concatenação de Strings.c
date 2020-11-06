#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i, j;
    char s1[20], s2[20];
    gets(s1);
    gets(s2);
    strcat(s1, s2);
    printf("%s \n", s1);
    system("pause");
    return 0;
}
