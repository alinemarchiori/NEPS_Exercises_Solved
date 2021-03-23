#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	string risada, vogais="";
	cin >> risada;
	int tamanho=risada.size();
	bool foi=true;
	for(int i=0;i<tamanho;i++){
		if((risada[i]=='a')or(risada[i]=='e')or(risada[i]=='i')or(risada[i]=='o')or(risada[i]=='u')){
			vogais+=risada[i];
		}
	}
	risada=vogais;
	reverse(risada.begin(),risada.end());
	for(int i=0;i<risada.size();i++){
		if(risada[i]!=vogais[i]){
			foi=false;
		}
	}
	if(foi){
		cout << "S\n";
	}else{
		cout << "N\n";
	}
}
