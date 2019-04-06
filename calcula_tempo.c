#include <stdio.h>
#include <stdlib.h>


void calcula_tempo( int entrada){
    int hora_segundos=3600, hora, minutos, segundos;
    hora=(entrada/hora_segundos);//calcula hora
    minutos=(entrada-(hora_segundos*hora))/60; //calcula minutos
    segundos=(entrada-(hora_segundos*hora)-(minutos*60)); // calcula segundos
    
    printf("O Tempo eh: %dh, %dmin e %dseg", hora, minutos, segundos);

}
int main(){
    int entrada_segundos;
    printf("\n\nCALCULO DE TEMPO\n\n");
    printf("Informe a Quantidade de Segundos:");
    scanf("%d",&entrada_segundos);

    calcula_tempo(entrada_segundos);
	return 0;
}

