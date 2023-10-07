#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int num1, num2, num3, num4;
	float media;
	
	printf("Digite um numero:\n");
	scanf("%i", &num1);
	printf("Digite outro numero:\n");
	scanf("%i", &num2);
	num3 = pow(num1, 2);
	num4 = pow(num2, 2);
	media = (num3+num4)/2;
	printf("Media dos dois numeros ao quadrado: %.2f", media);
	
}
