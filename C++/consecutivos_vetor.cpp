#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int vetor[n];
	for(int i=0;i<n;i++){
		cin >> vetor[i];
	}
	int cont=1, maior=0;
	for(int i=0;i<n;i++){
		if(vetor[i]==vetor[i+1]){
			cont++;
		}
		else{
			if(cont>maior){
				maior=cont;
				cont=1;
			}
			else{
				cont=1;
			}
		}
	}
	cout << maior << endl;
	return 0;
}
