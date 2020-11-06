#include <stdio.h>
#include <stdlib.h>
void primos(int m, int*p1, int*p2){
    int a=0,b=0,c=0,n, x;
    for(a=2;a<m;a++){
        n=0;
        for(b=2;b<a;b++){
            if(a%b==0){
                n++;
                break;}
        }
        if(n==0)
            x = a;
    }
    p1 = &x;
    for(c=m+1;;c++){
        n=0;
        for(b=2;b<c;b++){
            if(c%b==0){
                n++;
                break;}
        }
        if(n==0){
            p2=&c;
            break;
        }
    }
    printf("%d\n",*p1);
    printf("%d\n",*p2);
}

int main(){

   int m, p1, p2;
   scanf("%d",&m);
   primos(m,&p1,&p2);
    return 0;
}
