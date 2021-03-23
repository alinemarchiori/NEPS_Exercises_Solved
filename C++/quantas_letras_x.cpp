#include <iostream>
using namespace std;

int main(){
	string nome;
	char letra;
	int cont=0;
	cin >> nome >> letra;
	for(int i=0;i<nome.size();i++){
		if(nome[i]==letra){
			cont++;
		}
	}
	cout << cont << endl;
	return 0;
}
