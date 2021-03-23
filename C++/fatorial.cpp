#include <iostream>
using namespace std;

int main(){
	int n=0, fatorial=1;
	cin >> n;
	if(n!=0){
		for(int i=1;i<=n;i++){
			fatorial=fatorial*i;
		}
		cout << fatorial << endl;
	}else{
		cout << "1\n";
	}
	return 0;
}
