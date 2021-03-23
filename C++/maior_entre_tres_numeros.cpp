#include <iostream>
using namespace std;

int main(){
	int a=0,s=0,d=0;
	cin >> a >> s >> d;
	if(a>=s){
		if(a>=d){
			cout << a << endl;
		}
		else{
			cout << d << endl;
		}
	}else{
		if(s>=d){
			cout << s << endl;
		}
		else{
			cout << d << endl;
		}
	} 
	return 0;
}
