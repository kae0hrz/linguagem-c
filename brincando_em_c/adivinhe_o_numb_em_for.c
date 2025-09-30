
#include <stdio.h>

int main()
{
    int escolha = 0, n_escolhido = 67;
    
    for(;escolha != n_escolhido;)
    {
        printf("adivinhe o numero\n");
        printf("\n");
        printf("digite ");
        scanf("%d", &escolha);
        if(escolha == n_escolhido)
        {
            printf("\nparabens vc acertou na cagada\n");
        }
        else
        {
            printf("\nerroooooooooooooou\n    tenta dinovo ai\n");
        }
    }
    
    return 0;
}