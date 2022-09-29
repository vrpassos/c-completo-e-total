#include "stdio.h"

void test(const char *text);
void test2(int num);

int main() {

    int i = 75;
    char a = 'K';
    
    int num = 15;

    /*
    printf("%d\n", i);    
    printf("%c\n", i);
    printf("%d\n", a);
    printf("%c\n", a);
    */

    test("non nonon non nonon");

    test2(num);    

    return 0;
}

void test(const char *text){
    printf("%s\n", text);
    while(*text){
        if (*text==' ') printf("%c",'-');
        else printf("%c",*text);
        text++;
    }
    printf("\n");
}

void test2(int num){
    printf("%d\n", num);
    num = 2;
    printf("%d\n", num);
}