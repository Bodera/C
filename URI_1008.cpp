#include <stdio.h>

int main(){
// atividade: calcular o sal�rio de um cara
	
	int id;
	int horasTrabalhadas;
	double salarioHora;
	double resultado;

	// Leia id
	printf("");
	scanf("%d",&id);
	// Leia n�mero de horas trabalhadas
	printf("");
	scanf("%d",&horasTrabalhadas);
	// Leia o $/hora
	printf("");
	scanf("%lf",&salarioHora);
	
	// Calcule a diferen�a e me diga quando deu	
	printf("NUMBER = %d\n",id);
	resultado = horasTrabalhadas * salarioHora;
	printf("SALARY = U$ %.2lf\n",resultado);
	
	return 0;
}
