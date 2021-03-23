#include <iostream>
using namespace std;

int main(){
	int n, vetor[55];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> vetor[i];	
	}
	for(int i=0;i<n;i++){
		int quantidade=0;
		quantidade = quantidade + vetor[i];
		if(i<n-1){
			quantidade = quantidade + vetor[i+1];
		}
		if(i>0){
			quantidade = quantidade + vetor[i-1];
		}
		cout << quantidade << endl;
	}
	return 0;
}
