#include <stdio.h>

    unsigned long int num;

void main(){
    int i, banknotes[7] = {100,50,20,10,5,2,1};
    scanf("%d", &num);
    printf("%d\n", num);
    for (i=0; i<sizeof(banknotes)/sizeof(int); i++){
        printf("%d nota(s) de R$ %d,00\n", (num-num%banknotes[i])/banknotes[i], banknotes[i]);
        num = num%banknotes[i];
    }
}
