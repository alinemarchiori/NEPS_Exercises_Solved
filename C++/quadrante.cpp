#include <iostream>
using namespace std;

int main(){
	int x=0, y=0;
	cin >> x;
	cin >> y;
	if(x==0 or y==0){
		cout << "eixos" << endl;
	}else if(x>0){
		if(y>0){
			cout << "Q1\n";
		}else{
			cout << "Q4\n";
		}
	}else{
		if(y>0){
			cout << "Q2\n";
		}else{
			cout << "Q3\n";
		}
	}
	return 0;
}
