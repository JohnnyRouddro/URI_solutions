#include <stdio.h>

int i, j;

void swap(int *x,int *y){
    *x^=*y^=*x^=*y;
}


void main(){
    int i, input[3], asc[3];
    scanf("%d %d %d", &input[0], &input[1], &input[2]);

    for(i=0; i<sizeof(input)/sizeof(int); i++)
    {
        asc[i] = input[i];
    }

    for(i=0; i<sizeof(asc)/sizeof(int);i++)
    {
        for(j=0; j<sizeof(asc)/sizeof(int)-1;j++)
        {
            if(asc[j]>asc[j+1])
                swap(&asc[j], &asc[j+1]);
        }
    }

    for(i=0; i<sizeof(asc)/sizeof(int); i++)
        printf("%d\n", asc[i]);

    printf("\n");

    for(i=0; i<sizeof(input)/sizeof(int); i++)
        printf("%d\n", input[i]);

}
