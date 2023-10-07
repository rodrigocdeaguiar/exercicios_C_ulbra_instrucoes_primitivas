#include <stdio.h>
#include <math.h>

main(){
	float valorTotal, litros, valorLitro;
	printf("Digite o valor a ser pago pelo litro de combustivel:\n");
	scanf("%f", &valorLitro);
	printf("Digite a quantidade de litros que foi abastecida:\n");
	scanf("%f", &litros);
	valorTotal = valorLitro*litros;
	printf("Valor total do abastecimento: R$%.2f", valorTotal);

}
