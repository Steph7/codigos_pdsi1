#include <stdio.h>
#include <stdlib.h>
void soma_vetor (int n, int *vetor1, int *vetor2, int *soma){
    int i;
    for(i=0; i < n; i++){
        soma[i] = vetor1[i] + vetor2[i];
    }
}

int main(){
    int n, i;
    scanf("%d", &n);
    int *m1 = (int *) malloc(n*sizeof(int));
    int *m2 = (int *) malloc(n*sizeof(int));
    int *s = (int *) malloc(n*sizeof(int));
    // Vetor 1
    for(i=0; i < n; i++){
        scanf("%d", &m1[i]);
        getchar();
    }
    for(i=0; i < n; i++){
        scanf("%d", &m2[i]);
    }
    soma_vetor(n, m1, m2, s);

    for(i=0; i < n; i++){
        printf("%d\n", s[i]);
    }

    free(m1);
    free(m2);
    free(s);
    return 0;
}
