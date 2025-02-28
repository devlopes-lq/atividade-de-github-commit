#include <stdio.h>

int main() {
    
    int j = 10;
    int v1[10] = {1,2,3,4,5,6,7,8,9,10};
    int v2[10] = {10,9,8,7,6,5,4,3,2,1};
    int v3[10];
    
    for(int i = 0;  i < 10; i++){
        
        j--;
        v3[i] = v1[i] + v2[j];
        printf("%d\n", v3[i]);
    }
    return 0;
}