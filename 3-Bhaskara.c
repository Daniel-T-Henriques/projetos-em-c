#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, delta, raiz_delta, x1, x2;
	
	printf("Insira o valor de aLLLLL: ");
	scanf("%f", &a);
	printf("Insira o valor de b: ");
	scanf("%f", &b);
	printf("Insira o valor de c: ");
	scanf("%f", &c);
	
	//Delta e raiz
	delta = (b*b)-4*a*c;
	raiz_delta = sqrt(delta);
	
	printf("\nDelta = %f\nRaiz de Delta = %f\n\n", delta, raiz_delta);
	
	//Duas opcoes para x
	x1 = ((-b)+raiz_delta)/(2*a);
	x2 = ((-b)-raiz_delta)/(2*a);
	
	//Printando resultados
	if(isnan(x1) == 1 || isinf(x1) == 1){
		printf("x1 nao existe");
	}else{
		printf("x1 = %f", x1);
	}
	
	if(isnan(x2) == 1 || isinf(x2) == 1){
		printf("\nx2 nao existe");
	}else{
		printf("\nx2 = %f", x2);
	}
	
	//Press any key to continue
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
}
