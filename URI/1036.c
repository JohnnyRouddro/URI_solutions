#include <stdio.h>
#include <math.h>

void main(){
    double A,B,C,r1,r2;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A<=0 || ((B*B) - 4*A*C)<0){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5f\nR2 = %.5f\n", (-B+sqrt((B*B) - 4*A*C))/(2*A), (-B-sqrt((B*B) - 4*A*C))/(2*A));
    }
}
