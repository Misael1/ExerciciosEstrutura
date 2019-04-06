#include<stdio.h>
void verificar_idade(int x){
if (x >= 18 && x <= 70){
	printf("\n Sua votacao eh OBRIGATORIA!");
	}
	else{
	if(x <= 15 || x > 70){
		printf("\nSeu voto eh FACULTATIVO!");
	}
	}
}
	
void main(){
	char nome;
	int idade;
	long int titulo;
	printf("\n\t EXERCICIO 7 - PARTE II\n\n");
	printf("\n\t DIGITE SEUS DADOS PESSOAIS: ");
	printf("\n NOME: ");
	scanf("%s", &nome);
	printf("\n IDADE: ");
	scanf("%d", &idade);
	printf("\n TITULO DE ELEITOR: ");
	scanf("%li", &titulo);
	verificar_idade(idade);
}

