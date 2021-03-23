#include <iostream>
using namespace std;

int main(){
	int vetor[10], aux;
	for(int i=0;i<10;i++){
		cin >> vetor[i];
	}
	int ordenado=0;
	while(ordenado==0){
		ordenado=1;
		for(int i=0;i<10;i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
				vetor[i]=vetor[i+1];
				vetor[i+1]=aux;
				ordenado=0;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout << vetor[i] << " " ;
	}
	cout << endl;
	for(int i=9;i>=0;i--){
		cout << vetor[i] << " " ;
	}
	cout << endl;
	return 0;
}
