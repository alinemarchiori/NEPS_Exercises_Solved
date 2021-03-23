#include <iostream>
using namespace std;
int main(){
	int primeiro, segundo;
	cin >> primeiro >> segundo;
	if(primeiro == 1){
		if(segundo == 0){
			cout << "B\n";
		}
		else{
			cout << "A\n";
		}
	}
	else{
		cout << "C\n";
	}
	
	return 0;
}
