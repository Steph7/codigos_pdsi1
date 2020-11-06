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
int main(){
    long long int y, z;
    while(scanf("%lld", &y)!= EOF){
        z = primos(y);
        printf("%lld\n", z);
    }
    system("pause");
    return 0;
}
