#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <math.h>

float diagonal(float, float, float, float);

int main(){
	puts("========== Retangulador por Daniel T. Henriqes ==========");
	float xp, yp, x0, x1, y0, y1;
	bool xp_pertence = 0, yp_pertence = 0;
	bool p_pertence = 0;
	
	puts("Digite as coord. do canto inferior esquerdo do retangulo, ");
	printf("separando cada uma por Espaco: ");
	scanf("%f", &x0);
	scanf("%f", &y0);
	
	printf("Digite agora as coord. do canto superior direito: ");
	scanf("%f", &x1);
	scanf("%f", &y1);
	
	printf("O retangulo formado tem diagonal igual a %f.", diagonal(x0, x1, y0, y1));
	
	puts("\nDigite as coordenadas do ponto: ");
	scanf("%f", &xp);
	scanf("%f", &yp);
	
	if(xp >= x0 && xp <= x1){
	xp_pertence = 1;
	}else{
	xp_pertence = 0;
	}
	
	if(yp >= y0 && yp <= y1){
	yp_pertence = 1;
	}else{
	yp_pertence = 0;
	}
	
	if (xp_pertence == 1 && yp_pertence == 1){
		puts("O ponto pertence ao retangulo!");
	}else{
		puts("O ponto nao pertence ao retangulo!");
	}
	
	//Press any key to continue
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
}

float diagonal(float x0, float x1, float y0, float y1){
	float dist_x = x0 - x1;
	float dist_y = y0 - y1;
	float diagonal = sqrt(pow(dist_x, 2) - pow(dist_y, 2));
	return diagonal;
}