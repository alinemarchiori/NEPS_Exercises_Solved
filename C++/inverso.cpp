#include <iostream>
using namespace std;

int main(void){
	int n=10, v[11];
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	for(int i=9;i>=0;i--){
		cout << v[i] << endl;
	}
}
