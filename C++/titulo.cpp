#include <iostream>
#include <cctype>
#include <locale>
using namespace std;

string title(string F){
	//Seu código aqui
	int tamanho=F.size();
	for(int i=0;i<tamanho;i++){
		if(isalpha(F[i])){
			if(!(isalpha(F[i-1]))){
				char f = toupper(F[i]);
				F[i]=f;
			}
			else{
				char d = tolower(F[i]);
				F[i]=d;
			}
		}
	}
	return F;
}

int main(){ 
	string F;

	getline(cin, F);
	
	cout << title(F) << "\n";
}
