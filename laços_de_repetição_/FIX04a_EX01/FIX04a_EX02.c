/*

FIX04a_EX01: Faça um programa em Linguagem C que apresente os valores de 1 a 10.

FIX04a_EX02: Faça um programa em Linguagem C que apresente os valores de 10 a 1.

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int cont;
    
    cont = 1;
    while(cont <= 10)
    {
        printf(" %d", cont);
        cont++;
    }
    
    printf("\n");
    int i;
    
    i = 10;
    while(i >= 1){
        printf(" %d", i);
        i--;
    }

    return 0;
}
