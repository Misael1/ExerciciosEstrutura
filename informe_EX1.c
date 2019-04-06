#include<stdio.h>
	
int dobrar(int num){
	num = num * 2;
	return num;
}
int mult(int num1, int num2){
	int res;
	res = num1 * num2;
	return res;
}
int verificar(int numero){
	if (numero > 0){
	return 1;
}
else{
	if(numero < 0){
	return 2;
}
else{
	return 0;
}
}
}
void main(){
	int N1, N2;
	printf("\n\t EXERCICIO 2 - PARTE II\n\n");
	printf(" Digite dois valores, podendo ser positivo ou negativo:");
	scanf("%d %d", &N1, &N2);
	printf("\n O dobro eh: %d %d", dobrar(N1), dobrar(N2));
	printf("\n A multiplicacao de %d x %d eh igual a %d", N1, N2, mult(N1, N2));
	if(verificar(mult(N1, N2)) == 1){
	printf("\n O resultado da multiplicacao eh POSITIVO");
}
else{
	if(verificar(mult(N1, N2)) == 2){
	printf("\n O resultado da multiplicacao eh NEGATIVO");
	}
	else{
	printf("\n O resultado da multiplicacao eh NULO");
	}
}
	
}

