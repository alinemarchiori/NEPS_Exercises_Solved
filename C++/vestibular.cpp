#include <iostream>
using namespace std;

int main(){
	int n, i, cont=0;
	string certo, resposta;
	cin >> n;
	cin >> certo;
	cin >> resposta;
	for(i=0;i<n;i++){
		if(certo[i]==resposta[i]){
			cont++;
		}
	}
	cout << cont << endl;
	return 0;
}
