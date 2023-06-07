#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	float dolar;
	float cotdol;
	float real;
	char continuar = 's';
	while (continuar == 's')
	{
		printf("Qual a cotacao do dolar atualmente: ");
		scanf("%f", &cotdol);
		printf("Qual a quantia de dolares que deseja converter(tem que ser maior que 10 dolares): ");
		scanf("%f", &dolar);
		if(dolar < 10){
			printf("O valor inserido e menor que 10, nao e possivel realizar a conversao \n");
		}
		else{
			real = dolar * cotdol;
			printf("$%.2f dolares equivale a R$%.2f reais\n", dolar, real);
		}	
		printf("Deseja realizar outra conversão?[s/n]: ");
		scanf("%s", &continuar);
	}
	printf("Programa encerrado");
}


