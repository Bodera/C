#include <stdio.h>

void calcula_tempo(int &horas, int &minutos, int &segundos, int X){
	int hora_em_segundos = 3600;
	horas = X/hora_em_segundos;
	minutos = (X-(hora_em_segundos*horas))/60;
	segundos = (X-(hora_em_segundos*horas)-(minutos*60));
}

main(){
	int X;
	int horas,minutos,segundos;
	
	printf("");
	scanf("%d",&X);
	
	calcula_tempo(horas,minutos,segundos, X); //chamada da fun��o com identifica��o dos par�metros 
	
	printf("%d:%d:%d\n",horas,minutos,segundos);

 	getchar(); //Uma fun��o que n�o depende de bibliotecas para congelar a tela
 }
