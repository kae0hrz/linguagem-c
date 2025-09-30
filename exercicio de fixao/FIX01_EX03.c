/*Faça um programa em Linguagem C que peça uma temperatura em graus célsius e apresente seu respectivo valor em fahrenheit. O cálculo de conversão é: F = (9 * C / 5) + 32.
Casos de teste:
a) Para a temperatura de 50o Celsius, a temperatura em Fahrenheit é 122;
b) Para a temperatura de 18o Celsius, a temperatura em Fahrenheit é 64,4.*/

#include <stdio.h>

int main()
{
    printf("|  O CALCULO DE CONVERSÃO\n");
    printf("|;;;--.> vamos começar..:\n|  vamos pegar a temperatura em graus célsius e apresentar o valor em fahrenheit\n");
    
    float vlC = 0,//graus célsius
    vlF = 0;//fahrenheit
    
    printf("|  digite a temperatura que deseja calcular...: ");
    scanf("%f", &vlC);
    
    vlF = (9* vlC/5) + 32;
    
    printf(";;;;;---.> Para a temperatura de %.2f Celsius, a temperatura em Fahrenheit é %.2f", vlC,vlF);
    
    return 0;
}