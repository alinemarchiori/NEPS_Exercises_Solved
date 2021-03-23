#include <iostream>
using namespace std;
int main(){
	float a, b, media;
	cin >> a >> b;
	media = (a+b)/2;
	if(media>=7){
		cout << "Aprovado\n";
	}
	if(media<7 and media >= 4){
		cout << "Recuperacao\n";
	}
	if(media<4){
		cout << "Reprovado\n";
	}
	return 0;
}
