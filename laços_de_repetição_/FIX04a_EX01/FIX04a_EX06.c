/*
Faça um programa em Linguagem C para apresentar a tabuada de um número escolhido pelo usuário (1 a 10).
*/

#include <stdio.h>

int main()
{
    int num_escolhido = 0;
    scanf("%d", &num_escolhido);
    
    for(int i = 0; i <= 10; i++){
        
        int res;
        
        res = num_escolhido * i;
        printf("    %d x %d = %d \n",num_escolhido, i, res);
    }
    
  
    return 0;
}