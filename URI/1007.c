#include <stdio.h>

void main(){

    int number, work_hour;
    float pay_per_hour;
    scanf("%d %d %f", &number, &work_hour, &pay_per_hour);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, work_hour*pay_per_hour);

}
