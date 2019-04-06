#include<stdio.h>
#include<stdlib.h>

int main(){
	float P, H, IMC;
	
	printf("Digite o seu Peso:\n");
	scanf("%f", &P);
	
	printf("Digite a sua altura:\n");
	scanf("%f", &H);
	
	IMC = P / (H*H);
	
	if (IMC < 18){
		printf("Seu indice de Massa Corporal e %.2f e voce esta Abaixo do peso", IMC);
	}
	else 
	if(IMC < 25){
		printf("Seu indice de Massa Corporal e %.2f e voce esta no Peso Normal", IMC);
	}
	else 
	if(IMC < 30){
		printf("Seu indice de Massa Corporal e %.2f e voce esta Acima do Peso", IMC);
	}
	else 
	if(IMC < 35){
		printf("Seu indice de Massa Corporal e %.2f e voce esta com Obesidade I", IMC);
	}
	else 
	if(IMC < 40){
		printf("Seu indice de Massa Corporal e %.2f e voce esta com Obesidade II (SEVERA)", IMC);
	}
	else 
	if(IMC >= 40){
		printf("Seu indice de Massa Corporal e %.2f e voce esta com Obesidade III(MORBIDA)", IMC);
	}
	
	
	}
