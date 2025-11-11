/*
FIX09_EX01: Faça um programa em Linguagem C que receba e apresente na tela uma data. Esta data é um registro (struct) com dia, mês e ano (ambos inteiros).

FIX09_EX02: Idem ao EX01, todavia, a data deve ser apresentada na tela por meio de uma função que receberá esta data por parâmetro.
Exemplo de saída: 26/08/2024

FIX09_EX03: Complementando o EX02, cria uma nova função que deve apresentar a data recebida por parâmetro, com o mês por extenso, como no exemplo.
Exemplo de saída: 26 de Agosto de 2024
*/
#include <stdio.h>

struct Calendario{
    int dia;
    int mes;
    int ano;
}tpCalendario;


int main()
{
    
    printf("    Digite uma data\n");
    scanf("%d/%d/%d", &tpCalendario.dia,
                        &tpCalendario.mes,
                        &tpCalendario.ano);
    
    
    
    char *nome_meses[] = {"JANEIRO",
                        "FEVEREIRO",
                        "MARCO",
                        "ABRIL",
                        "MAIO",
                        "JUNHO",
                        "JULHO",
                        "AGOSTO",
                        "SETEMBRO",
                        "OUTUBRO",
                        "NOVEMBRO",
                        "DEZEMBRO"};
    
    
    
    printf("%02d/%s/%d", tpCalendario.dia,
                        nome_meses[tpCalendario.mes - 1],
                        tpCalendario.ano);
    return 0;
}