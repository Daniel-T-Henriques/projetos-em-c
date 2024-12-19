#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num;
	
	printf("Digite quantos numeros voce deseja gerar: ");
	scanf("%i", &num);
	
	puts("Alocando memoria...");
	int * ptr = calloc(num, sizeof(int));
	
	if(ptr != NULL){
		puts("Memoria alocada com sucesso!");
	}else{
		perror("Erro ao alocar memoria!");
	}
	
	//Gerando randoms
	srand(time(NULL));
	for(int i=0; i<num; i++){
		ptr[i] = rand();
		printf("%i - %i\n", i, ptr[i]);
	}
	
	free(ptr);
    system("pause");
	return 0;
}
