#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	char palavra[30], letra[1], secreta[30];
	int tamanho=0, i=0, chances=6, acertos=0;
	bool acerto=false, jogar=true;
	while(jogar){
		cout << "Digite a palavra, com as letras minusculas, a ser acertada.\n";
		cin >> palavra;
		system("cls");// serve pra apagar a tela, mas só funciona no windows
		for(i=0;palavra[i]!='\0';i++){
			tamanho++;
		}
		for(i=0;i<tamanho;i++){
			secreta[i]='_';
		}
		while((chances>0)and(acertos<tamanho)){
			cout << "Tentativas restantes: " << chances << endl << endl;
			cout << "\n\nPalavra: ";
			for(i=0;i<tamanho;i++){
				cout << secreta[i] << " ";
			}
			cout << "\n\n\nDigite uma letra, em minusculo: \n";
			cin >> letra[0];
			for(i=0;i<tamanho;i++){
				if(palavra[i]==letra[0]){
					acerto=true;
					acertos++;
					secreta[i]=letra[0];
				}
			}
			if(!acerto){
				chances--;
			}
			acerto=false;
			system("cls");
		}
		if(acertos==tamanho){
			cout << "\n\nParabens nota 2\nNao fez mais que a obrigacao\n\n";
		}
		if(chances==0){
			cout << "\n\nParabens foi um desastre, que droga hein!\n\n";
		}
		cout << "\n--------------------\nDeseja jogar novamente?(s/n)\n--------------------" << endl;
		cin >> letra[0];
		if(letra[0]=='n'){
			jogar=false;
		}
		else{
			acertos=0;
			chances=6;
			acerto=false;
			i=0;
			tamanho=0;
		}
		system("cls");
	}
	return 0;
}
