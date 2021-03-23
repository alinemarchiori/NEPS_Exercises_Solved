#include <iostream>

using namespace std;

int main (){
	double raio=0.0, pi=3.14159, resultado=0;
	cin >> raio;
	resultado = raio*raio*pi;
	cout.precision(3);
	cout.setf(ios::fixed);
	cout << resultado << "\n";
	return 0;
}
