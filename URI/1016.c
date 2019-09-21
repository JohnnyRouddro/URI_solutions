#include <stdio.h>

void main(){
    int time_spent, avg_speed;
    scanf("%d %d", &time_spent, &avg_speed);
    printf("%.3f\n", (float)(time_spent*avg_speed)/12);
}
