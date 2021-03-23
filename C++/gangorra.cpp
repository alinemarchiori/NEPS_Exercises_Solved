#include <iostream>
using namespace std;

int main(){
	int p1, c1, p2, c2;
	cin >> p1 >> c1 >> p2 >> c2;
	int resultado1, resultado2;
	resultado1 = p1*c1;
	resultado2 = p2*c2;
	if(resultado1==resultado2){
		cout << "0\n";
	}
	else{
		if(resultado1<resultado2){
			cout << "1\n";
		}
		else{
			cout << "-1\n";
		}
	}
	return 0;
}
