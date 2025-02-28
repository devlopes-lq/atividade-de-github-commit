#include <stdio.h>

int main() {
    
    int numero;
    int j = 0;
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    
    printf("digite um numero: ");
    scanf("%d", &numero);
    
    for(int i = 0;  i < 10; i++){
        
        if(v[i] > numero){
            
            printf("%d, ", v[i]);
        }else{
            
            j++;
        }
    }
    
    printf("\nessa é quantidade de numeros menores: %d", j -1);
    return 0;
}