#include <iostream>
using namespace std;

int main(){
	int a=0, b=0, c=0;
	cin >> a >> b >> c;
	if(a==b){
		cout << c << endl;
	}else if(a==c){
		cout << b << endl;
	}else{
		cout << a << endl;
	}
	return 0;
}
