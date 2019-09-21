#include <stdio.h>
#include <math.h>

void main(){

    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    A = round(A*10)/10;
    B = round(B*10)/10;
    C = round(C*10)/10;
    printf("MEDIA = %.1f\n", ((A*2)+(B*3)+(C*5))/10);

}
