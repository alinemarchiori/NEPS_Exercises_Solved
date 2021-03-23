#include <iostream>
using namespace std;

int main(){
	int a=0, b=0, c=0, d=0;
	cin >> a >> b >> c >> d;
	if((a==b+c+d)and(d==b+c)and(b==c)){
		cout << "S\n";
	}else{
		cout << "N\n";
	}
	return 0;
}
