#include <stdio.h>
#include <stdlib.h>
int bs(int a){
    if((a%4==0)&&(a%100!=0)||(a%400==0)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x, y;
    while(scanf("%d", &x) != EOF){
        y = bs(x);
        printf("%d\n", y);
    }
    system("pause");
    return 0;
}
