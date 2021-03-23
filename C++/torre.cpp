#include <iostream>
using namespace std;

int main(void){
	int n, i, j;
	cin >> n;
	int tab[n][n], soma=0, maior=0, linhas[n], colunas[n];
	for(i=0;i<n;i++){//obtendo os dados da matriz
		for(j=0;j<n;j++){
			cin >> tab[i][j];
		}
		linhas[i]=colunas[i]=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			linhas[i]=linhas[i]+tab[i][j];
			colunas[i]=colunas[i]+tab[j][i];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			soma=(colunas[j]+linhas[i])-(2*tab[i][j]);
			if(soma>maior){
				maior=soma;
			}
		}
	}
	cout << maior << endl;
}
