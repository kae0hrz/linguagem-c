#include <stdio.h>
#define LINHA 6
#define COLUNA 6

int main()
{
    int matriz[LINHA][COLUNA];
    int i, j;
    
    printf(" Digite a temperatura em uma parte da estufa\n");
    printf("\n");
    
    
    for(i = 0; i < LINHA; i++)
    {
        printf("estufa %d\n", i + 1);
        for(j = 0; j < COLUNA; j++) 
        {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    
    int coluna_maior, linha_maior, coluna_menor, linha_menor;
    
    int maior, menor;
    
    maior = menor = matriz[0][0];
    
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            if(matriz[i][j] > maior)
            {
               maior = matriz[i][j];
               linha_maior = i;
               coluna_maior = j;
            }
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                linha_menor = i;
                coluna_menor = j;
            }
        }
    }
    
    printf("| Maior temperatura..: %d na posicao(%d, %d)", maior, linha_maior, coluna_maior);
    printf("| Menor temperatura..: %d na posicao(%d, %d)", menor, linha_menor, coluna_menor);
    
    
    return 0;
}