#include <iostream>
using namespace std;

int main(){
	float raio=0.0,pi=3.1416, resultado=0.0; 
	cin >> raio;
	resultado = (raio*raio)*pi;
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << resultado << "\n";
	return 0;
}
