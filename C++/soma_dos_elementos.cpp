#include <iostream>
using namespace std;

int main(){
	int n=0, v[110], soma=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	for(int i=0;i<n;i++){
		soma+=v[i];
	}
	cout << soma << endl;
	return 0;
}
