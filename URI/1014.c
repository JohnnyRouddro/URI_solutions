#include <stdio.h>
#include <math.h>

void main(){
    int X;
    float Y;
    scanf("%d %f", &X, &Y);
    Y = round(Y*10)/10;
    printf("%.3f km/l\n", X/Y);
}
