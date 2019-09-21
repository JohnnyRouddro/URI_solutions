#include <stdio.h>
#include <math.h>

int maior(int a, int b){
    return (a+b+abs(a-b))/2;
}

void main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d eh o maior\n", maior(c, maior(a,b)));
}
