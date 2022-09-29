#include "stdio.h"

int func(){
    static int i = 0;
    i++;
    return i;
}

int main(){

    int i;

    for (i==0;i<5;i++){
        int num = func();
        printf("%d\n",num);
    }
    return 0;
}