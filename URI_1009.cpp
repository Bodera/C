#include <stdio.h>

int main(){
// atividade: ler e imprimir um nome mais o $ do fim do m�s
	
	char nome[32];
	double salarioFixo;
	double montanteVendas;
	double comissao = 0.15;
	double resultado;

	// Leia nome
	printf("");
	scanf("%s",&nome);
	// Leia sal�rio fixo
	printf("");
	scanf("%lf",&salarioFixo);
	// Leia o montante de vendas realizadas pelo vendedor
	printf("");
	scanf("%lf",&montanteVendas);
	
	// Calcule a diferen�a e me diga quando deu	
	resultado = salarioFixo+(montanteVendas*comissao);
	printf("TOTAL = R$ %.2lf\n",resultado);
	
	return 0;
}
