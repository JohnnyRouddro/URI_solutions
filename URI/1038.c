#include <stdio.h>

void main(){
    int X,Y;
    float price[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    scanf("%d %d", &X, &Y);
    printf("Total: R$ %.2f\n", price[X-1]*Y);
}
