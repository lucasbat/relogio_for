/*
Programa na linguagem C++ que simula um relogio digital com horas, minutos e segundos.
*/

//chama a biblioteca iostream
#include<iostream>

//para utilizacao das palavras reservadas
using namespace std;

//inicia a classe principal
int main()
{
	//inicia os lacos de repeticao do tipo for
	for(int h=0; h<24; h=h+1)
		for(int m=0; m<60; m=m+1)
			for(int s=0; s<60; s=s+1)
				for(int x=0; x<1200; x=x+1)

					//imprime na tela a contagem
					cout<<h<< " : "<<m<< " : "<<s<<"             \r";

	//salta duas linhas - estatica
	cout<<"\n\n";

	//retorna o valor 0
	return 0;

//finaliza a classe main
}
