#include <stdio.h>

int main(){
/*
Neste problema, deve-se ler o c�digo de uma pe�a 1, 
 o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1,
 o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o
 valor unit�rio de cada pe�a 2. 
Ap�s, calcule e mostre o valor a ser pago.
*/
	
	int idL1,qtdL1;	double precoL1;
	int idL2,qtdL2;	double precoL2;
	double resultado;

	// Leia linha 1
	printf("");
	scanf("%d %d %lf",&idL1,&qtdL1,&precoL1);
	// Leia linha 2
	printf("");
	scanf("%d %d %lf",&idL2,&qtdL2,&precoL2);
	
	// Calcule o valor a pagar	
	resultado = qtdL1*precoL1+qtdL2*precoL2;
	printf("VALOR A PAGAR: R$ %.2lf\n",resultado);
	
	return 0;
}
