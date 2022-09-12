#include "stdio.h"

int main(){
    short int x = 4;
    short int y = 7;

    printf("OR: %d\n",x|y);
    printf("AND: %d\n",x&y);
    printf("NOT: %d\n",~y);
    printf("Desl <: %d\n",x<<1);
    printf("Desl >: %d\n",x>>1);
    return 0;
}