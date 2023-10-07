#include <stdio.h>
#include <conio.h>

int main(){
	int num1, num2;
	float media;
	
	printf("Digite um numero:\n");
	scanf("%i", &num1);
	printf("Digite outro numero: \n");
	scanf("%i", &num2);
	media = (num1 + num2)/2;
	printf("A media entre os dois valores eh %.2f.", media);
}
