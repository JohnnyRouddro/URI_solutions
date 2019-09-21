#include <stdio.h>

void main(){
    int age;
    scanf("%d", &age);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", age/360, age%365/30, age%365%30);
}
