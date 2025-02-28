#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j = 0;
    int v[20];
   
    
    for(int i = 1; i < 11; i++){
        
        v[i] = i;
        
        j++;
        j = i * v[i];
        printf("%d|%d|", v[i],j);
    }

    return 0;
}