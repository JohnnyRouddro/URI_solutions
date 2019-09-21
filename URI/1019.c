#include <stdio.h>

void main(){
    int N;
    scanf("%d", &N);
    printf("%d:%d:%d\n", (N-N%3600)/3600, ((N-N%60)/60)%60, N%60);
}
