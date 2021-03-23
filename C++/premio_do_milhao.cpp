#include <iostream>
using namespace std;

int main(){
	int numero, acessos, soma, cont=1;
	cin >> numero;
	cin >> soma;
	while(numero>1){
		if(soma<1000000){
			cont++;
		}
		cin >> acessos;
		soma=soma+acessos;
		numero--;	
	}
	cout << cont << endl;
	
	return 0;
}
