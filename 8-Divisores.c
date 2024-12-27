#include <stdio.h>
int main(){
	int numero, divisor, acum, num;
	
	printf("Digite um numero para encontrar seus divisores: ");
	scanf("%i", &numero);
	
	for(divisor=1; divisor<numero; divisor++){
		if(numero%divisor==0){
			printf("%i  ",divisor);
			acum=acum+divisor;
		};
	};
}
