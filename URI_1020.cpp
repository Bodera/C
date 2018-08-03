#include <stdio.h>

void calcula_tempo(int &anos, int &meses, int &dias, int X){
	int dias_no_ano = 365; //1 ano cont�m 365 dias
	anos = X/dias_no_ano; //Dividindo o valor recebido por 365 obtemos o n�mero de anos
	meses = (X-(dias_no_ano*anos))/30; //Multiplica-se 365 pelo n�mero de anos para subtrair pelo valor recebido e enfim dividir por 30 dias
	dias = (X-(dias_no_ano*anos)-(meses*30)); //Multiplica-se 365 pelo n�mero de anos e 60 vezes os meses para subtrair pelo valor recebido
}

int main(){
	int X;
	int anos,meses,dias;
	
	printf("");
	scanf("%d",&X);
	
	calcula_tempo(anos,meses,dias, X); //chamada da fun��o com identifica��o dos par�metros 
	
	printf("%d ano(s)\n",anos);
	printf("%d mes(es)\n",meses);
	printf("%d dia(s)\n",dias);

	return 0;
 	//getchar(); //Uma fun��o que n�o depende de bibliotecas para congelar a tela
 }
