#include <stdio.h>

int main(){
// atividade: calcular a diferen�a do produto entre 4 inteiros
	
	int A,B,C,D;
	int DIFERENCA = 0;

	// Leia A
	printf("");
	scanf("%d",&A);
	// Leia B
	printf("");
	scanf("%d",&B);
	// Leia C
	printf("");
	scanf("%d",&C);
	// Leia D
	printf("");
	scanf("%d",&D);
	
	// Calcule a diferen�a e me diga quando deu	
	DIFERENCA = (A*B-C*D);
	printf("DIFERENCA = %d\n",DIFERENCA);
	
	return 0;
}
