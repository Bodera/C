#include <stdio.h>
int main(){
	/*Calcule o consumo m�dio de um autom�vel sendo fornecidos 
	   a dist�ncia total percorrida (em Km) e o total de combust�vel gasto (em litros).*/
	int X;
	double Y,consumo;
	
	printf("");
	scanf("%d",&X);
	printf("");
	scanf("%lf",&Y);
	
	consumo = X/Y;
	printf("%.3lf km/l\n",consumo);
}
