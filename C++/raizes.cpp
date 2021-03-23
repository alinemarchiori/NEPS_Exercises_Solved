#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;
	float numero, raizes;
	cin >> a;
	for(a;a>0;a--){
		cin >> numero;
		raizes = sqrt(numero);
		cout.precision(4);
		cout << fixed << raizes << endl;
	}
	return 0;
}
