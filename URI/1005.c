#include <stdio.h>
#include <math.h>

void main(){

    double A, B;
    scanf("%lf %lf", &A, &B);
    A = round(A*10)/10;
    B = round(B*10)/10;
    printf("MEDIA = %.5lf\n", ((A*3.5)+(B*7.5))/11);

}
