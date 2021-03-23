#include <iostream>
using namespace std;

int main(){
	int n=0, soma=0, i=0, vetor[1000], posicao=0;
	cin >> n;
	for(i=1;i<=n;i++){
		if((n%i)==0){
			vetor[posicao]=i;
			posicao++;
			soma=soma+i;
		}
	}
	cout << posicao << " divisor(es): ";
	for(i=0;i<posicao;i++){
		cout << vetor[i] << " ";
	}
	cout << "\nSoma de divisores = " << soma << endl;
	if(posicao>2 or n==1){
		cout << "Nao primo\n";
	}else{
		cout << "Primo\n";
	}
	return 0;
}
