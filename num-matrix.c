#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void fill_matrix(int matrix[][10], int l);
void print_matrix(int matrix[][10], int n);

int main(){    
    
    int n = 0;
    int matrix[10][10];

    while (n == 0){
        char cn[] = "\0";
        printf("Enter n size: ");        
        scanf("%s", cn);                
        n = atoi(cn);        
    }
        
    fill_matrix(matrix, n);    
    print_matrix(matrix, n);    
    
    return 0;
}

void fill_matrix(int matrix[][10], int l){    
    int direct = 0; //0 = right/down; 1 = left/up
    int m = 0;
    int n = 0;
    int count = 1;
    int lcount = 0;
    
    while (l > 0){        
        if (direct == 0){            
            for (int j = n; j < l + lcount; j++){
                matrix[m][j] = count;                
                count++;
                n = j;
            }            
            m++;
            for (int i = m; i < l+ lcount; i++){                
                matrix[i][n] = count;
                count++;
                m = i;
            }
            n--;
            direct = 1;
            l--;
        }        
        else {
            for (int j = n; j >= 0 + lcount; j--){
                matrix[m][j] = count;
                count++;
                n = j;
            }
            m--;
            for (int i = m; i > 0 + lcount; i--){                
                matrix[i][n] = count;
                count++;
                m = i;
            }
            n++;
            direct = 0;
            l--;
            lcount++;
        }
    }
    
}

void print_matrix(int matrix[][10], int n){    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
}