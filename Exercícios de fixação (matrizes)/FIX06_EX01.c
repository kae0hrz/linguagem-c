/*
    Uma escola deseja monitorar a variação de temperatura ao longo da semana em suas 3 salas de aula. Para isso, 
 registrou a temperatura diária (de segunda a sexta) em cada sala. Crie um programa em Linguagem C que leia e
 armazene essas informações em uma matriz 3x5 e exiba as temperaturas organizadas em formato de tabela.

Entradas (temperaturas em °C):

  Sala 1: [22, 23, 21, 22, 20]
  Sala 2: [24, 25, 23, 22, 21]
  Sala 3: [20, 21, 22, 23, 24]
	

Saída esperada:

  22   23   21   22   20
  24   25   23   22   21
  20   21   22   23   24
*/

#include <stdio.h>

int main()
{
    int temp[5][3];
    int L , C;
    
    for(C = 0; C < 3; C++)
    {
        printf("SALA %d\n", (C + 1));
        for(L = 0; L < 5; L++)
        {
        scanf("%d", &temp[L][C]);
        }
    }
   
   printf("\n\n");
   
   for(C = 0; C < 3; C++)
   {
       printf("\n");
       for(L = 0; L < 5; L++)
       {
       printf("%d",temp[L][C] );
       }
   }
   
    return 0;
}
