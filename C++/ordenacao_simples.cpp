#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int vetor[n];
	for(int i=0;i<n;i++){
		cin >> vetor[i];
	}
	sort(vetor,vetor+n);
	for(int i=0;i<n;i++){
		cout << vetor[i] << ' ';
	}
	cout << endl;
	return 0;
}
