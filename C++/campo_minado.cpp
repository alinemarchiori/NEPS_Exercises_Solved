#include <iostream>
using namespace std;

int main(){
	int n, a=0;
	cin >> n;
	int vetor[n];
	for(int i=0;i<sizeof(vetor)/4;i++){
		cin >> vetor[i];
	}
	while(a<n){
		if(vetor[a-1]==0 and vetor[a]==0 and vetor[a+1]==1){
			cout << "1" << endl;
		}
		if(vetor[a-1]==0 and vetor[a]==1 and vetor[a+1]==1){
			cout << "2" << endl;
		}
		if(vetor[a-1]==0 and vetor[a]==1 and vetor[a+1]==0){
			cout << "1" << endl;
		}
		if(vetor[a-1]==1 and vetor[a]==1 and vetor[a+1]==1){
			cout << "3" << endl;
		}
		if(vetor[a-1]==0 and vetor[a]==0 and vetor[a+1]==0){
			cout << "0" << endl;
		}
		if(vetor[a-1]==1 and vetor[a]==0 and vetor[a+1]==0){
			cout << "1" << endl;
		}
		if(vetor[a-1]==1 and vetor[a]==0 and vetor[a+1]==1){
			cout << "2" << endl;
		}
		if(vetor[a-1]==1 and vetor[a]==1 and vetor[a+1]==0){
			cout << "2" << endl;
		}
		a++;
	}
	return 0;
}
