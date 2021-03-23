#include <iostream>
using namespace std;

int main(){
	int n, cor=0, a, b;
	cin >> n;
	int fita[n];
	for(a=0;a<n;a++){
		cin >> fita[a];
	}
	for(a=0;a<10;a++){
		for(b=0;b<n;b++){
			if(fita[b]==cor and fita[b]!=9){
				if(fita[b+1]==-1){
					fita[b+1]=cor+1;
				}
				if(fita[b-1]==-1){
					fita[b-1]=cor+1;
				}
			}
		}
		if(cor<10){
			cor++;
		}
	}
	for(a=0;a<n;a++){
		if(fita[a]==-1){
			fita[a]=9;
		}
	}
	for(a=0;a<n;a++){
		cout << fita[a] << " ";
	}
	cout << endl;
	return 0;
}
