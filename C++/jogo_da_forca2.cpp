#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

//prototipando as funções
void mostralinha();
void apagatela();
void mostrachances(int c);

int main(){
	string palavra, letra, mostra;
	char mostrar[30];
	int i=0, chances=5, tamanho=0, acertadas=0;
	bool acerto=false;
	mostralinha();
	cout << "Digite a palavra a ser descoberta:" << endl;
	mostralinha();
	cin >> palavra;
	apagatela();
	tamanho = palavra.size();
	for(i=0;i<tamanho;i++){
		mostrar[i]='_';
	}
	while(chances>0 and acertadas<tamanho){
		mostralinha();
		mostrachances(chances);
		mostralinha();
		chances--;
		
	}
	return 0;
}
void mostralinha(){
	cout << "-----------------------------------" << endl;
}
void apagatela(){
	system("cls");
}
void mostrachances(int c){
	cout << "       VOCE TEM " << c << " CHANCE(S)." << endl;
}


