#include "stdio.h"

int main(){
    
    int i;
    for (i=0;i<10;i++){
        printf("%d:2 = %.1f\n",i,(float)i/2);
    }
    
    return 0;
}