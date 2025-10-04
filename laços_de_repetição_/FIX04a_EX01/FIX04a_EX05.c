/*
FIX04a_EX05: Faça um programa em Linguagem C que receba um número do usuário e apresente a fase "Seja bem vindo", tantas vezes quanto for esse número. Um frase por linha.
*/

#include <stdio.h>

int main()
{
    int cont = 0;
    
    scanf("%d", &cont);
    
    for(int i = 1; i <= cont; i++)
    {
        printf("%d - SEJA BEM VINDO\n", i);
    }
    
  
    return 0;
}