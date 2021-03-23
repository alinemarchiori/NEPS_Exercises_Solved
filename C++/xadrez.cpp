#include <iostream>
using namespace std;

int main(){
	int linha, coluna;
	cin >> linha;
	cin >> coluna;
	if(((linha+coluna)%2)==0){
		cout << "1\n";
	}else{
		cout << "0\n";
	}
	return 0;
}
