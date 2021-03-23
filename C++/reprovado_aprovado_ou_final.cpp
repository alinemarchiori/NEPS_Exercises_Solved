#include <iostream>
using namespace std;

int main(){
	int um=0, dois=0, total=0;
	cin >> um >> dois;
	total=((um*2)+(dois*3))/5;
	if(total>=7){
		cout << "Aprovado" << endl;
	}else if(total<3){
		cout << "Reprovado" << endl;
	}else{
		cout << "Final" << endl;
	}
	return 0;
}
