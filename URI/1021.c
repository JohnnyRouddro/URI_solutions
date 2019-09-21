#include <stdio.h>

void main(){
    double num;
    int note100, note50, note20, note10, note5, note2, coin1, coin50, coin25, coin10, coin05, coin01;
    int notes;
    int coins;
    scanf("%lf", &num);
    notes = num;
    coins = (num - notes)*100;
    if((coins*1000)%10 == 9){
        coins++;
    }

    note100 = notes/100;
    notes %= 100;
    note50 = notes/50;
    notes %= 50;
    note20 = notes/20;
    notes %= 20;
    note10 = notes/10;
    notes %= 10;
    note5 = notes/5;
    notes %= 5;
    note2 = notes/2;
    notes %= 2;

    coin1 = notes;
    coin50 = coins/50;
    coins %= 50;
    coin25 = coins/25;
    coins %= 25;
    coin10 = coins/10;
    coins %= 10;
    coin05 = coins/5;
    coins %= 5;
    coin01 = coins;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", note100);
    printf("%d nota(s) de R$ 50.00\n", note50);
    printf("%d nota(s) de R$ 20.00\n", note20);
    printf("%d nota(s) de R$ 10.00\n", note10);
    printf("%d nota(s) de R$ 5.00\n", note5);
    printf("%d nota(s) de R$ 2.00\n", note2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin1);
    printf("%d moeda(s) de R$ 0.50\n", coin50);
    printf("%d moeda(s) de R$ 0.25\n", coin25);
    printf("%d moeda(s) de R$ 0.10\n", coin10);
    printf("%d moeda(s) de R$ 0.05\n", coin05);
    printf("%d moeda(s) de R$ 0.01\n", coin01);
}
