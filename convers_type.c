#include "stdio.h"

int main(){

    int i = 1100;
    char ch = 'a';
    float f = 0.5;
    int aux;

    aux = ch;
    ch = i;
    printf("%c\n", ch);
    i = f;
    printf("%d\n",i);
    f = aux;
    printf("%f\n",f);
    
    return 0;
}