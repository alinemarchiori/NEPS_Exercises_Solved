#include <iostream>
#include <algorithm>
using namespace std;

struct paises{
	int ouro, prata, bronze, nome;
};
int ordena(paises a, paises b){
	if(a.ouro != b.ouro){
		return a.ouro > b.ouro;
	}
	if(a.prata != b.prata){
		return a.prata > b.prata;
	}
	if(a.bronze != b.bronze){
		return a.bronze > b.bronze;
	}
	return a.nome < b.nome;
}
int main (void){
	int m, n, o, p, b;
	paises v[105];
	cin >> n >> m;
	for(int i=0;i<n;i++){
		v[i].ouro=0;
		v[i].prata=0;
		v[i].bronze=0;
		v[i].nome=i+1;
	}
	for(int i=0;i<m;i++){
		cin >> o >> p >> b;
		v[o-1].ouro++;
		v[p-1].prata++;
		v[b-1].bronze++;
	}
	sort(v,v+n,ordena);
	for(int i=0;i<n;i++){
		cout << v[i].nome << " ";
	}
	cout << endl;
}
