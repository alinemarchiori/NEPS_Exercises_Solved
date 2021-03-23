#include <iostream>
using namespace std;

int main(){
	int cont, n, contador=0, maior=0;
	cin >> cont;
	int teste, inicial=cont;
	while(cont>0){
		while(1){
			cin >> n;
			contador++;
			cont--;
		}
		if(contador<maior){
			maior=contador;
		}
		contador=0;
	}
	cout << maior << endl;
	return 0;
}
