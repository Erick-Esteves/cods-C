#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
int main (int argc, char *arqv[]){ /*bibliotecas*/
	float altura, volume, raio;   		/* declaração da variavel*/
	
	printf("Digite a altura do cilindro: "); /*pedir a medida para o usuario*/
	scanf("%f", &altura); /* vai ler a informação digitada pelo usuario*/
	
	printf("Digite o raio da base: ");
	scanf("%f", &raio);
	
	volume = 3.14159 * raio * raio * altura;
	
	printf("O volume do cilindro eh: %f\n", volume);
	return 0; 
}
