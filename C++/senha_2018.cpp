#include <iostream>
using namespace std;

int main(){
	int x=0, vezes=0;
	while(x!=2018){
		cin >> x;
		if(x!=2018){
			vezes++;
		}
	}
	cout << vezes << endl;
	return 0;
}
