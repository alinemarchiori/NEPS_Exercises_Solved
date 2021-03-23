#include <iostream>
using namespace std;

int main(){
	int x=0;
	cin >> x;
	for(int i=1;i<=10;i++){
		cout << x << " * " << i << " = " << (x*i) << endl;
	}
	return 0;
}
