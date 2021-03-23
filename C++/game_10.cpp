#include <iostream>
using namespace std;

int main(){
	int soma=0, a, b, c;
	cin >> a >> b >> c;
	if(b>=c){
		soma = b-c;
		cout << soma << endl;
	}else{
		soma = (a-c)+b;
		cout << soma << endl;
	}
	return 0;
}
