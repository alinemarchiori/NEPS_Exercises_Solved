#include <iostream>
using namespace std;

int main(){
	int hatual=0, matual=0, hreuniao=0, mreuniao=0;
	cin >> hatual >> matual >> hreuniao >> mreuniao;
	int conta = (((hreuniao-hatual)*60)+(mreuniao-matual))-45;
	if(conta>=0){
		cout << "Sucesso\n";
	}else{
		conta = conta*-1;
		cout << "Atrasado " << conta << endl;
	}
	return 0;
}
