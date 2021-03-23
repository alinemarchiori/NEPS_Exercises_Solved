#include <iostream>
using namespace std;

bool eh_primo(int x){
	//Seu código aqui.
	int divisores=0;
	for(int cont=1;cont<=x;cont++){
		if((x%cont)==0){
			divisores++;
		}
	}
	if((divisores<=2)and(x!=1)){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int x;
	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
