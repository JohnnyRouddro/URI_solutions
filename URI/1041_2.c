#include <stdio.h>

void main(){
    float x,y;
    scanf("%f %f", &x, &y);

    if(x==0)
    {
        if(y==0)
        {
            printf("Origem");
        }else
        {
            printf("Eixo Y");
        }
    }else if(y==0)
    {
        printf("Eixo X");
    }else
    {
        if(x>0)
        {
            if(y>0)
            {
                printf("Q1");
            }else
            {
                printf("Q4");
            }
        }else
        {
            if(y>0)
            {
                printf("Q2");
            }else
            {
                printf("Q3");
            }
        }
    }
    printf("\n");
}
