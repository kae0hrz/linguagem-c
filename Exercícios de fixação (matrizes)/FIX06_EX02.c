/*
FIX06_EX02: Uma loja tem 4 vendedores e registra as vendas diárias (segunda a sexta) em uma matriz 4x5.
 Escreva um programa em Linguagem C que leia os dados da matriz, calcule e exiba o total de vendas de cada
  vendedor ao final da semana.
*/

#include <stdio.h>
#define Linha 4
#define Coluna 5

int main()
{
    float vendas[Linha][Coluna] = {
                            {100.50,  150.75,  200.00,  130.20,  170.40},
                            {80.90,  120.10,  90.50,  110.30,  100.00},
                            {200.00,  210.45,  190.80,  205.35,  215.60},
                            {90.25,  100.00,  95.95,  85.10,  105.30}};
    
    int lin, col;
    
    for(lin = 0 ; lin < Linha; lin++){
        for(col = 0 ; col < Coluna ; col++){
            printf("|  R$ %8.2f|", vendas[lin][col]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    float soma;
    
    for(lin = 0 ; lin < Linha; lin++){
        soma = 0;
        for(col = 0 ; col < Coluna ; col++){
            soma += vendas[lin][col];
        }
        printf("soma total do vendedor %d = %.2f", (lin + 1) , soma);
        printf("\n");
    }
   
    return 0;
}