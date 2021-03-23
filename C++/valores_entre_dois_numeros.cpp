#include <iostream>
using namespace std;

int main(){
	int x=0, i=0;
	cin >> i >> x;
	if(x>i){
		for(i;i<=x;i++){
			cout << i << " ";
		}
		cout << endl;
	}else{
		for(x;x<=i;x++){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
