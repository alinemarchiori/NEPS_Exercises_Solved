#include <iostream>
using namespace std;

int main(){
	int um=0, dois=0, tres=0, quatro=0;
	cin >> um >> dois >> tres >> quatro;
	if(um==tres or dois==quatro){
		if(um==tres and dois!=quatro){
			cout << "V\n";
		}else if(dois==quatro and um!=tres){
			cout << "V\n";
		}else{
			cout << "F\n";
		}
	}else{
		cout << "F\n";
	}
	return 0;
}
