#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 0,j = 0, matriz[3][4];
    int soma;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            matriz[i][j] = rand() % 10;
        }
        soma = i + j;
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf ("%d ", matriz[i][j]);
        }
        printf("\n");

    }
    
    return 0;
}