#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char caracteres(char string[], char letra[]){
  long int i, j;
  for(i=0; i < strlen(string);i++){
    if(string[i]==letra[0]){
      for(j=i;j < strlen(string); j++){
        string[j] = string[j+1];
      }
      return caracteres(string, letra);
    }
  }
  printf("%s\n", string);
}


int main(){
    int n=100, z;

    char *car = (char *) malloc(n* sizeof(char));
    char *e = (char *) malloc (z* sizeof(char));
    gets(car);
    gets(e);

    caracteres(car, e);
    return 0;
}
