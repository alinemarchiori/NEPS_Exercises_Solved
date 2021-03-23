#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int c, a;
	cin >> c ;
	cin >> a ;
	float resultado = a/(c-1.0);
	int s=ceil(resultado);
	cout << s << endl;
	return 0;
}
