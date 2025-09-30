#include <stdio.h>

int main(){
    int idade = 0,
    ano = 0,
    anoAtual = 2025;
    
    printf("em que ano voce nasceu??\n");
    printf("digite aqui..:");
    scanf("%d", &ano);
    
    idade = anoAtual - ano;
    
    printf("Para o ano %d, a provavel idade é %d", ano, idade);
    
    
    return 0;
}