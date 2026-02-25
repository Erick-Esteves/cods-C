#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c, auxA, auxB, auxC;
	char charA, charB, charC;
	
//	charA = "A";
//	charB = "B";
//	charC = "C";
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
	printf("\n\nVoce deseja trocar a variavel A por qual outra (A, B ou C): ");
	scanf(" %c", &charA);
	
	printf("\n\nVoce deseja trocar a variavel B por qual outra (A, B ou C): ");
	scanf(" %c", &charB);
	
	printf("\n\nVoce deseja trocar a variavel C por qual outra (A, B ou C): ");
	scanf(" %c", &charC);
	
	if(charA == 'A') auxA = a;
	else if (charA == 'B') auxA = b;
	else auxA = c;
	
	if(charB == 'A') auxB = a;
	else if (charB == 'B') auxB = b;
	else auxB = c;
	
	if(charC == 'A') auxC = a;
	else if (charC == 'B') auxC = b;
	else auxC = c;
	
	printf("\n\nOs valores das variaveis sao:\n");
	printf("A: %d\n", auxA);
	printf("B: %d\n", auxB);
	printf("C: %d", auxC);
	
	return 0;
}
