#include <iostream>
using namespace std;

int main(){
	int x, cont;
	cin >> x;
	cont = 1;
	while(cont<=x){
		if((x%cont)==0){
			cout << cont << " ";
		}
		cont++;
	}
	cout << endl;
	return 0;
}
