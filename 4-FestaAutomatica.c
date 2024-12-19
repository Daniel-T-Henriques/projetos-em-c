#include <stdio.h>
#include <Windows.h>

#define T_FESTA 5
int main(){
	int i;
	
	//mencionando as funcoes
	void letreiro();
	
	puts("BEM VINDA(O) A FESTA!");
	
	system("cls");
	
	letreiro();
	
	for (i=0; i<=T_FESTA; i++){
		//CORES
		system("color 2");
		Sleep(100);
		system("color 3");
		Sleep(100);
		system("color 4");
		Sleep(100);
		system("color 5");
		Sleep(100);
		system("color 6");
		Sleep(100);
		system("color 7");
		Sleep(100);
	}
}

void letreiro(){
	puts("=================================================");
	puts("===OOOOOO==OOOOOO===OOOOO==OOOOOOO===OOOO====O===");
	puts("===O=======O=======O==========O=====O====O===O===");
	puts("===O=======O=======O==========O=====O====O===O===");
	puts("===OOOOO===OOOOO====OOOO======O=====O====O===O===");
	puts("===O=======O============O=====O=====OOOOOO===O===");
	puts("===O=======O============O=====O=====O====O=======");
	puts("===O=======OOOOOO==OOOOO======O=====O====O===O===");
	puts("=================================================");
}
