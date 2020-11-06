#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i;
    char c1, c2;
    char s[20];
    fgets(s,20, stdin);
    scanf("%c", &c1);
    getchar();
    scanf("%c", &c2);

    for(i=0; i < strlen(s); i++){
        if(s[i]==c1){
         s[i]=c2;
         break;
        }
    }
    printf("%s", s);
    system("pause");
    return 0;
}
