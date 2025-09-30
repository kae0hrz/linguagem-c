#include <stdio.h>

int main()
{
    int escolha = 0, n_escolhido = 67;
    
    do{
        printf("    adivinhe o numero que eu pensei\n");
        scanf("%d", &escolha);
        if(escolha == n_escolhido){
            printf("cagada voce acertou\n");
        }else{
            printf("ERROUUUUU   :)\n tente novamente \n \n");
        }
    }while(escolha != n_escolhido);

    return 0;
}