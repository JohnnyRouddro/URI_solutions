#include <stdio.h>

void main(){
    float x,y;
    scanf("%f %f", &x, &y);

    if(x==0.0 && y==0.0)
    {
        printf("Origem\n");

    }else if(x==0.0 && y!=0.0)
    {
        printf("Eixo X\n");

    }else if(x!=0.0 && y==0.0)
    {
        printf("Eixo Y\n");

    }else if(x>0.0 && y>0.0)
    {
        printf("Q1\n");

    }else if(x<0.0 && y>00)
    {
        printf("Q2\n");

    }else if(x<0.0 && y<0.0)
    {
        printf("Q3\n");

    }else
    {
        printf("Q4\n");

    }

//    if(x==0.0)
//    {
//        if(y==0.0)
//        {
//            printf("Origem");
//        }else
//        {
//            printf("Eixo X");
//        }
//    }else if(y==0.0)
//    {
//        printf("Eixo Y");
//    }else
//    {
//        if(x>0.0)
//        {
//            if(y>0.0)
//            {
//                printf("Q1");
//            }else
//            {
//                printf("Q4");
//            }
//        }else
//        {
//            if(y>0.0)
//            {
//                printf("Q2");
//            }else
//            {
//                printf("Q3");
//            }
//        }
//    }
//    printf("\n");
}
