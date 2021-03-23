#include <iostream>
#include <stack>
using namespace std;

int main(void){
	stack <char> chaves;
	string linha;
	int n;
	for(int i=0;i<n;i++){
		cin >> linha;
		for(int j=0;j<linha.size();j++){
			if(linha[i]=='{' or linha[i]=='}'){
				if(pilha.empty()){
					chaves.push(linha[i]);
				}
			}
		}
	}
}
