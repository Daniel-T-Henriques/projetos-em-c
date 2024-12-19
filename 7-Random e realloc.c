#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define esc 27
#define TAM 100

void testar_malloc(int);

int main(){
	system("color A");
	int input, i=0, parar = 0;
	
	puts("Pressione qualquer tecla para gerar mais 100 numeros");
	puts("Pressione 'esc' a qualquer momento para sair\n");
	
	switch(input = getch()){
		case 27:
			return 0;
			break;
		default:
			break;
	}
	
	puts("Alocando memoria...");
	int * ptr = calloc(TAM, sizeof(int));
	testar_malloc(*ptr);
	
	srand(time(NULL));
	for(int j=0; j<(TAM + (TAM*i) ); j++){
		ptr[j] = rand();
		printf("%i - %i\n", j+1, ptr[j]);
	}
	
	
	do{
		i++;
		
		input = getch();
		switch(input){
			case esc:
				parar = 1;
				free(ptr);
				break;
			default:
				parar = 0;
				ptr = realloc(ptr, TAM*sizeof(int) + TAM*sizeof(int)*i);
				//Gerando randoms
				for(int j=TAM*i; j<(TAM + (TAM*i) ); j++){
					ptr[j] = rand();
					printf("%i - %i\n", j+1, ptr[j]);
				}
				break;
		}
	}while(parar != 1);
	
	free(ptr);
}

void testar_malloc(int endereco){
	if(&endereco != NULL){
		puts("Memoria alocada com sucesso!");
	}else{
		perror("Erro ao alocar memoria!");
	}
}