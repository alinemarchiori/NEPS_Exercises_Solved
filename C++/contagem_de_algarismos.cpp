#include <iostream>
using namespace std;

int main(){
	int zero=0, um=0, dois=0, tres=0, quatro=0, cinco=0, seis=0, sete=0, oito=0, nove=0;
	int i, tamanho=0, j;
	cin >> tamanho;
	string vetor[tamanho], nome;
	for(i=0;i<tamanho;i++){
		cin >> vetor[i];
	}
	for(i=0;i<tamanho;i++){
		nome=vetor[i];
		for(j=0;j<nome.size();j++){
			if(nome[j]=='0'){
				zero++;
			}
			if(nome[j]=='1'){
				um++;
			}
			if(nome[j]=='2'){
				dois++;
			}
			if(nome[j]=='3'){
				tres++;
			}
			if(nome[j]=='4'){
				quatro++;
			}
			if(nome[j]=='5'){
				cinco++;
			}
			if(nome[j]=='6'){
				seis++;
			}
			if(nome[j]=='7'){
				sete++;
			}
			if(nome[j]=='8'){
				oito++;
			}
			if(nome[j]=='9'){
				nove++;
			}
		}
	}
	cout << "0-" << zero << endl;
	cout << "1-" << um << endl;
	cout << "2-" << dois << endl;
	cout << "3-" << tres << endl;
	cout << "4-" << quatro << endl;
	cout << "5-" << cinco << endl;
	cout << "6-" << seis << endl;
	cout << "7-" << sete << endl;
	cout << "8-" << oito << endl;
	cout << "9-" << nove << endl;
	return 0;
}
