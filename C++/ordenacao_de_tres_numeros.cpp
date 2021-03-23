#include <iostream>
using namespace std;

int main(){
	int a=0,b=0,c=0;
	cin >> a >> b >> c;
	if(a>=b and a>=c){
		if(b>=c){
			cout<<c<<endl<<b<<endl<<a<<endl;
		}else{
			cout<<b<<endl<<c<<endl<<a<<endl;
		}
	}else if(b>=a and b>=c){
		if(a>=c){
			cout<<c<<endl<<a<<endl<<b<<endl;
		}else{
			cout<<a<<endl<<c<<endl<<b<<endl;
		}
	}else{
		if(b>=a){
			cout<<a<<endl<<b<<endl<<c<<endl;
		}else{
			cout<<b<<endl<<a<<endl<<c<<endl;
		}
	}
	
	return 0;
}
