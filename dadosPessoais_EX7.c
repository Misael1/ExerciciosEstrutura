#include<stdio.h>
#define TAM 5
	
int preencheVetor(int *vt, int retornar){
	int c, maior = vt[0], menor = vt[1];
	for (c = 0; c < TAM; c++){
		if(maior < vt[c]){
		maior = vt[c];
		}
		else{
			if(menor > vt[c])
			menor = vt[c];
		}
	}
	if(retornar == 1){
		return maior;
		}
		else{
			return menor;
		}
		return 0;
}
void main(){
	int c, vetor[TAM];
	printf("\n\t EXERCICIO 4 - PARTE II\n\n");
	printf("DIGITE OS NUMEROS PARA PREENCHER O VETOR: ");
	for(c = 0; c < TAM; c++)
	scanf("%d", &vetor[c]);
	printf("\n\t O MAIOR NUMERO DO VETOR EH: %d", preencheVetor(vetor, 1));
	printf("\n\t O MENOR NUMERO DO VETOR EH: %d", preencheVetor(vetor, 0));
}
