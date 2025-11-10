#include <stdio.h>
#define DIAS 5


int main()
{
    
    char *dias[DIAS] = {"segunda","terça","quarta","quinta","sexta"};
    int Salas[3][DIAS];
    
    printf("|_ registro de temperatura diaria escolar _|\n");
    
    int i, j;
    
    for(i = 0; i < 3; i++){
        printf("| _ Sala = %d ", i + 1);
        for(j = 0; j < DIAS; j++){
            printf("| _ Digite a temperatura do dia %s..:", dias[j]);
            scanf("%d", &Salas[i][j]);
        }
        printf("\n");
    }
    
    
     for(i = 0; i < 3; i++){
        printf("| _ Sala = %d | -->", i + 1);
        for(j = 0; j < DIAS; j++){
            printf("    %d ",Salas[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}