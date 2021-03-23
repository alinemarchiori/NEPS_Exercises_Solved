#include <iostream>
using namespace std;

int main(){
	int a=0, b=0, c=0;
	cin >> a >> b >> c;
	if(a==b and b==c){
		cout << "*\n";
	}else if(a==b){
		cout << "C\n";
	}else if(a==c){
		cout << "B\n";
	}else{
		cout << "A\n";
	}
	return 0;
}
