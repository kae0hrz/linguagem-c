/*Faça um programa em Linguagem C que receba 5 números do usuário. A cada número lido imprima na tela se ele é ou não múltiplo de 3.
*/
#include <stdio.h>

int main()
{
    int num, i;
    
    for(i = 1; i <= 5; i++)
    {
        printf("digite um numero\n");
        scanf("%d", &num);
        
        if(num % 3== 0)
        {
            printf("este sao os numeros multiplos de 3 = %d\n",num);
        }else{
            printf("este nao e um numero multiplos = %d\n", num);
        }

    }

    return 0;
}