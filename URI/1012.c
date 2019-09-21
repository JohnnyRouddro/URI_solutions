#include <stdio.h>

void main(){
    double A, B, C, PI = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", A*C/2.0, C*C*PI, (A+B)/2.0*C, B*B, A*B);
}
