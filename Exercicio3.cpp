#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	float valorHora, salario;
	int horasTrabalhadas, numFuncionario;
	
	printf("Digite o numero do funcionario:\n");
	scanf("%i", &numFuncionario);
	printf("Digite o valor da hora trabalhada:\n");
	scanf("%f", &valorHora);
	printf("Digite o numero de horas trabalhadas:\n");
	scanf("%i", &horasTrabalhadas);
	salario = valorHora*horasTrabalhadas;
	printf("O funcionario de numero %i recebe R$%.2f a hora trabalhada. Trabalhou %i horas no mes.\n", numFuncionario, valorHora, horasTrabalhadas);
	printf("O seu salario bruto e de R$%.2f.", salario);
	
}
