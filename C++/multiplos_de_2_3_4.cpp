#include <iostream>
using namespace std;

int main(){
	int x=0, y=0, dois=0, tres=0, quatro=0;
	cin >> x;
	for(int i=0;i<x;i++){
		cin >> y;
		if((y%2)==0){
			dois++;
		}
		if((y%3)==0){
			tres++;
		}
		if((y%4)==0){
			quatro++;
		}
	}
	cout << dois << endl << tres << endl << quatro << endl;
	return 0;
}
