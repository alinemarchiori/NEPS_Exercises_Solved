#include <iostream> // não achei a solução
#include <algorithm>
using namespace std;

struct Competidor{
	int id;
	int pontos;
};

int main(void){
	Competidor matriz[110][110];
	int n=0, cont=0, g, p, K;
	cin >> g >> p;
	for(int i=0;i<g;i++){
		for(int j=0;j<p;j++){
			cin >> matriz[i][j].id;
			matriz[i][j].pontos=0;
		}
	}
	cin >> n;
	int sistema[110];
	for(int p=0;p<n;p++){
		cin >> K;
		for(int k=0;k<K;k++) cin >> sistema[k];
		for(int i=0;i<g;i++){
			for(int j=p-1;j>=K;j--){
				matriz[i][j].pontos+=sistema[cont];
				cont++;
			}
			cont=0;
		}	
	}
	for(int i=0;i<g;i++){
		for(int j=0;j<p;j++){
			cout << matriz[i][j].pontos << " ";
		}
	}
}
