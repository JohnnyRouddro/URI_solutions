#include <stdio.h>

void main(){
    char name[128];
    double salary, sales;
    scanf("%s %lf %lf", &name, &salary, &sales);
    printf("TOTAL = R$ %.2lf\n", salary+(sales*15/100));
}
