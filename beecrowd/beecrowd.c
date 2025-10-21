/*Substituição em Vetor I 


Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.
Entrada

A entrada contém 10 valores inteiros, podendo ser positivos ou negativos.
Saída

Para cada posição do vetor, escreva "X[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.
Exemplo de Entrada 	Exemplo de Saída

entrada
0
-5
63
0
...
	
saida
X[0] = 1
X[1] = 1
X[2] = 63
X[3] = 1
... 

*/

#include <stdio.h>

int main(){
	
	float vet[10];
	int i = 0;
	
	for(i = 0; i < 10; i++){
	scanf("%f", &vet[i]);
	
	}
	
	for(i = 0; i < 10; i++){
	if(vet[i] <= 10)
	{
		printf("A[%d] = %.1f\n",i, vet[i]);
	}
	}
	
	return 0;
}