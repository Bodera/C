#include <stdio.h>
#include <math.h>

int main(){
/*
Fa�a um programa que calcule e mostre o volume de uma esfera 
 sendo fornecido o valor de seu raio (R).
A f�rmula para calcular o volume �: (4/3) * pi * R3.
*/
	
	float raio;
	double pi = 3.14159;
	double volume;

	// Leia o raio
	printf("");
	scanf("%f",&raio);
	
	// Calcule o  volume (Dica usei decimal na divis�o 4/3, para n�o interpretar o resultado como inteiro)	
	volume = (4.0/3.0) * pi * pow(raio,3);
	printf("VOLUME = %.3lf\n",volume);
	
	return 0;
}
