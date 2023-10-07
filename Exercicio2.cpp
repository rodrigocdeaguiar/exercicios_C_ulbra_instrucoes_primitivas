#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int num, result;
	
	printf("Digite um numero:\n");
	scanf("%i", &num);
	result = pow(num, 2);
	printf("Resultado: %i", result);
}
