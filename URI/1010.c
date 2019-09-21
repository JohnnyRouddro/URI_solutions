#include <stdio.h>

void main(){
    typedef struct Data {
        int code, quantity;
        float price;
    }data;

    data data1, data2;
    scanf("%d %d %f", &data1.code, &data1.quantity, &data1.price);
    scanf("%d %d %f", &data2.code, &data2.quantity, &data2.price);
    printf("VALOR A PAGAR: R$ %.2f\n", data1.quantity*data1.price + data2.quantity*data2.price);
}
