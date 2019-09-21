#include <stdio.h>
#include <math.h>

void main(){
    double p1[2], p2[2];
    scanf("%lf %lf", &p1[0], &p1[1]);
    scanf("%lf %lf", &p2[0], &p2[1]);
    printf("%.4f\n", sqrt((p2[0]-p1[0])*(p2[0]-p1[0]) + (p2[1]-p1[1])*(p2[1]-p1[1])));
}
