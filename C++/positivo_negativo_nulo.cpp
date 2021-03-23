#include <iostream>
using namespace std;
int main(){
	int numero;
	cin >> numero;
	if(numero>0){
		cout << "Positivo\n";
	}
	else if(numero == 0){
		cout << "Nulo\n";
	}
	else{
		cout << "Negativo\n";
	}
	return 0;
}
