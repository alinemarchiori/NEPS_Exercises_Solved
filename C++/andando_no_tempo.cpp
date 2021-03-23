#include <iostream>
using namespace std;

int main(){
	int soma=0, a=0, b=0, c=0, d=0;
	cin >> a >> b >> c;
	if(a-b==0 or a-c==0 or b-c==0){
		cout << "S\n";
	}else if(a+b==c or a+c==b or b+c==a){
		cout << "S\n";
	}else{
		cout << "N\n";
	}
	return 0;
}
