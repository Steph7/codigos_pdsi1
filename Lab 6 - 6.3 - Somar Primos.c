#include <stdio.h>
#include <stdlib.h>
long long int primos(long long int x){
    long long int i, j=0;
    for(i=1; i<= x; i++){
        if(x%i==0){
            j++;
        }
    }
    if(j==2){
        return 1;
    }
    if(j > 2){
        return 0;
    }
    if(x < 2){
        return -1;
    }
}

long long int somap(long long int x){
    long long int n, a=0, y;
    for(n=1; n <= x; n++){
        y = primos(n);
        if(y==1){
            a = a + n;
        }
        else{
            a;
        }
    }
    return a;
}
int main(){
    long long int z, s;
    int v;
    while(z != EOF){
        scanf("%lld", &z);
        s = primos(z);
        if (s==1){
            s = somap(z);
        }
        printf("%lld\n", s);
    }
    system("pause");
    return 0;
}
