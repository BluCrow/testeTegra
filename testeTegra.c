#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
	double entrada;
	
	/*Cabeçalho - Inicio Processo*/
	printf("Teste Cash-Machine Tegra\n");
	
	/*Inicio Loop*/
	while(1){
		printf("Informe o valor a ser retirado (0 p/ encerrar)\n");
		scanf("%lf", &entrada);
	
		/*Encerrar processo*/
		if(entrada == 0){break;}
		
		/*Verificação de entrada */
		//Utilizando variável double(primitiva) valor nunca nulo
		/*if(entrada == NULL){
			printf("\nErro de valor nulo\n");
		}*/else if(entrada < 0){
			printf("\nErro de valor inválido\n");
		}
		else if(fmod(entrada, 10) > 0){
			printf("\nErro de notas indisponíveis\n");
		}
		else {
			/*Valor informado é válido*/
			printf("\n[");
			while(entrada > 0){
				/*Descontando notas*/
				if(entrada >= 100){
					printf("100.00");
					entrada -= 100;
				}
				else if(entrada >= 50){
					printf("50.00");
					entrada -= 50;
				}
				else if(entrada >= 20){
					printf("20.00");
					entrada -= 20;
				}
				else{
					printf("10.00");
					entrada -= 10;
				}
				
				/*Correção de Saída*/
				if(entrada > 0){
					printf(", ");
				}
			}
			printf("]\n\n");
		}	
	}
	return 0;
}