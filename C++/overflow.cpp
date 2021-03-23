#include <iostream>
using namespace std;

int main(){
	int maior, primeiro, segundo, resultado;
	char c;
	cin >> maior;
	cin >> primeiro >> c >> segundo;
	if(c == '+'){
		resultado=primeiro+segundo;
		if(resultado>maior){
			cout << "OVERFLOW\n";
		}
		else{
			cout << "OK\n";
		}
	}
	if(c == '*'){
		resultado=primeiro*segundo;
		if(resultado>maior){
			cout << "OVERFLOW\n";
		}
		else{
			cout << "OK\n";
		}
	}
	return 0;
}
