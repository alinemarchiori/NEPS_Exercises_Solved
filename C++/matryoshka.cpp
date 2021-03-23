#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int n=0, cont=0, bonecas[100000], ordenadas[100000], p[100000];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> bonecas[i];
		ordenadas[i]=bonecas[i];
	}
	sort(ordenadas,ordenadas+n);
	for(int i=0;i<n;i++){
		if(bonecas[i]!=ordenadas[i]){
			p[cont]=bonecas[i];
			cont++;
		}
	}
	sort(p,p+cont);
	if(cont>0){
		cout << cont << endl;
		for(int i=0;i<cont;i++){
			cout << p[i] << " ";
		}
		cout << endl;
	}else{
		cout << cont << endl;
	}
}
