#include "stdio.h"

int main(){

    int i, pt, *m;

    i = 1;
    m = &i;
    pt = *m;

    printf("Endereço: %n\n",m);
    printf("Valor: %d\n",pt);

    printf("Tamanho da variável: %ld\n",sizeof i);
    printf("Tamanho do ponteiro: %ld\n",sizeof m);
    
    return 0;
}