#include <iostream>
using namespace std;

int main(){
	int cont, i, vezes=0; 
	cin >> cont;
	int vetor[cont];
	for(i=0;i<cont;i++){
		cin >> vetor[i];
	}
	vetor[cont]=2;
	for(i=0;i<(cont-2);i++){
		if(vetor[i]==1 and vetor[i+1]==0 and vetor[i+2]==0){
			vezes++;
		}
	}
	cout << vezes << endl;
	return 0;
} 
