#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float comprimento, largura, altura, volume;
	
	printf("Digite o valor do comprimento do paralelepipedo reto retangulo: ");
	scanf("%f", &comprimento);
	
	printf("Digite o valor da altura do paralelepipedo reto retangulo: ");
	scanf("%f", &altura);
	
	printf("Digite o valor da largura do paralelepipedo reto retangulo: ");
	scanf("%f", &largura);
	
	volume = comprimento * largura * altura;
	
	printf("O volume do paralelepipedo reto retangulo: %f", volume);
	return 0;
}

