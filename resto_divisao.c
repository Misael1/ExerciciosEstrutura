#include<stdio.h>

int resto_divisao(int N1, int N2){
	int resto;
	resto = (N1 % N2);
	return resto;
}
main (){
	int num1, num2, retornar;
	printf("\n\nRESTO DE UMA DIVISAO ENTRE DOIS NUMEROS\n\n");
	printf("Digite o Primeiro Numero:");
	scanf("%d", &num1);
	printf("Digite o Segundo Numero:");
	scanf("%d", &num2);
	
	resto_divisao(num1,num2);
	retornar=resto_divisao(num1,num2);
	
	printf("O resultado do Resto da Divisao eh: %d", retornar);
}
