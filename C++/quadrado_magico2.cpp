//nao deu certo faltam casos

#include <iostream>
using namespace std;

int main(){
	int n=0;
	cin >> n;
	int quadrado[n][n], num=0, soma1=0, soma2=0, soma3=0, i=0, j=0;
	for(i=0;i<n;i++){//pegando os dados da matriz
		for(j=0;j<n;j++){
			cin >> quadrado[i][j];
			if(quadrado[i][j]>num){
				num=quadrado[i][j];
			}
		}
	}
	for(i=0;i<n;i++){//somando uma coluna
		soma1=soma1+quadrado[i][0];
	}
	for(j=0;j<n;j++){//somando uma linha 
		soma2=soma2+quadrado[0][j];
	}
	for(i=0;i<n;i++){//somando a diagonal
		soma3=soma3+quadrado[i][i];
	}
	if(soma1==soma2 and soma1==soma3 and num==(n*n)){
		cout << soma1 << endl;
	}
	else{
		cout << "-1\n";
	}
	return 0;
}
