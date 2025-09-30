/*
Faça um programa em Linguagem C que peça o ano de nascimento do usuário e apresente sua provável idade.
Casos de teste:
a) Para o ano 2000, a provável idade é 22;
b) Para o ano 1976, a provável idade é 46.


*/



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