#include <stdio.h>
#include <conio.h>
main (){
	/*Dois carros (X e Y) partem em uma mesma dire��o. O carro X sai com velocidade 
	constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
	Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quil�metros do carro X,
 	ou seja, consegue se afastar um quil�metro a cada 2 minutos.
	Leia a dist�ncia (em Km) e calcule quanto tempo leva (em minutos) 
	para o carro Y tomar essa dist�ncia do outro carro.

	--Entrada--
	O arquivo de entrada cont�m um n�mero inteiro.
	---Sa�da---
	Imprima o tempo necess�rio seguido da mensagem "minutos".*/
     
 	int D,X;
     
     printf(""); 
     scanf ("%d",&D);//Dist�ncia em Km
 	
 	X = (60*D)/30; //X � igual a 60 minutos vezes Km  dividido por 30 Km --> a diferen�a em Km de carro X e Y
 
 printf ("%d minutos\n",X);
 
 getch(); // fun��o exclusiva da conio.h (congelar a tela)
 
}
