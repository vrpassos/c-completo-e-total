#include "stdio.h"
#include "string.h"

void print_text(char *text);

int main(){
    char text[] = "nonon non nonon";
    print_text(text);
    return 0;
}

void print_text(char *text){
    for (;*text != '\0';text++)
        if (*text != ' ')
            printf("%c", *text);
        else
            printf("\n");
    printf("\n");
}