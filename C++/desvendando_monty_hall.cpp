#include <iostream>
using namespace std;

int main(void){
	int n, p, cont=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> p;
		if(p==3 or p==2){
			cont++;
		}
	}
	cout << cont << endl;
}
