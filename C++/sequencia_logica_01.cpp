#include <iostream>
using namespace std;

int main(){
	int a=0, b=0;
	while(a<=30){
		for(int i=1;i<=2;i++){
			b=b+1;
			cout << "a = " << a << " <-> " << "b = " << b << endl;
		}
		a=a+2;
		b=b+1;
	}
	return 0;
}
