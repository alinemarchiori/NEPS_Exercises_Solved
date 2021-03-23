#include <iostream>
using namespace std;
int main(){
	int alunos, monitores, resultado;
	cin >> alunos;
	cin >> monitores;
	if(alunos+monitores < 51){
		cout << "S\n";
	}
	else{
		cout << "N\n";
	}
	return 0;
}
