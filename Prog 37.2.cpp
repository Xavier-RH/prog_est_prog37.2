/* Autor: Xavier Romero Hernández, Realizado: 10/03/2022 
	Tomando como base el programa anterior, validar que los datos de entrada solo acepten los valores permitidos (números positivos). 
	El programa debe pedir los datos y si no son válidos, los debe preguntar nuevamente, hasta que se introduzcan los valores permitidos
*/
	
#include <stdio.h>
#include <math.h>

int main(){
	float radio, angulo, area;
	
	printf("Calculo de area de un sector circular\n\n");
	do{
		printf("Ingrese el radio del circulo: ");
		scanf("%f",&radio);
		if(radio<=0){
			printf("\nValor no valido, ingrese un valor mayor a 0\n\n");
		}
	}while(radio<=0);
	do{
		printf("Ingrese el angulo del sector a calcular: ");
		scanf("%f",&angulo);
		if(angulo<=0){
			printf("\nValor no valido, ingrese un valor mayor a 0\n\n");
		}
	}while(angulo<=0);
	
	
	area=((M_PI*pow(radio,2))/360)*angulo;
	
	printf("\nEl area del sector circular es de %.2f u2",area);
	
	return 0;
}
