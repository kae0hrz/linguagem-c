/*
 Faça um programa em Linguagem C que peça 6 números inteiros e, depois, apresente-os na tela na forma invertida ao que foi digitado.
Casos de teste (ignore os _ ):
a) Para a entrada: 1 _ 3 _ 2 _ 4 _ 5 _ 9, a saída será: 9 _ 5 _ 4 _ 2 _ 3 _ 1
b) Para a entrada: 70 _ 18 _ 7 _ 51 _ 12 _ 6, a saída será: 6 _ 12 _ 51 _ 7 _ 18 _ 70
*/
#include <stdio.h>
#define TAM 6

int main()
{
    int num [TAM] ;
    
    for(int i = 0; i < TAM ; i++)
    {
       scanf("%d", &num[i]);
    }
    
    printf("\n");
    
    for(int nv = 0 ; nv < TAM ; nv++)
    {
        printf("%d _", num[nv]);    
    }
    
    printf("\n\n");
    
    for(int inv = TAM - 1 ; inv >= 0; inv--)
    {
        printf("%d _", num[inv]);
    }
   
    return 0;
}