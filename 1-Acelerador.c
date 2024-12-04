#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

void mensagem();

int main(){
	float s, t, t_sim, v0, a;
	
	mensagem();
	
	//Definindo valores das vars
	printf("Digite a velocidade inicial do objeto: ");
	scanf("%f", &v0);
	printf("Digite a aceleracao do objeto: ");
	scanf("%f", &a);
	printf("Digite quanto tempo voce deseja simular: ");
	scanf("%f", &t_sim);
	
	for (t=0; t<=t_sim; t++){
		s = v0*t + (a*t*t)/2;
		printf("\nPosicao em t=%.2f: %.2f", t, s);
		Sleep(1000);
	}
	
	printf("\n\nA velocidade media do objeto foi de %.2f unidades por segundo", s/t_sim);
	
	//Press any key to continue
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
return 0;
}

void mensagem(){
	printf("Calculadora de MRUV");
	printf("\n===================\n\n");
}
