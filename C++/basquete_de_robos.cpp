#include <iostream>
using namespace std;

int main (){
	int d=0, pontos=0;
	cin >> d;
	if(d<=800){
		pontos=1;
	}else if(d>1400){
		pontos=3;
	}else{
		pontos=2;
	}
	cout << pontos << endl;
	return 0;
}
