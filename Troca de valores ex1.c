#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * arqv []) {
	int a, b, temp;
	
	printf("Digite o valor da variavel A:");
	scanf("%d",& a);
	
	printf("Digite o valor da variavel B:");
	scanf("%d",& b);
	
	temp= a;
	a=b;
	b=temp;
	
	printf("O novo valor de A e: %d",a);
	printf("\n O novo valor de B e: %d",b);
	return 0;
	
	
	
	
}


