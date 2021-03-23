#include <iostream>
#include <vector>
using namespace std;

int main(void){
	vector< vector<int> > matriz(3, vector<int>(3));
	int p=2,principal=0,secundaria=0, coluna=0, linha=0, soma=0;
	bool condicao=true;
	for(int i=0;i<3;i++){for(int j=0;j<3;j++)cin >>matriz[i][j];}
	for(int i=0;i<3;i++){
		principal+=matriz[i][i];
		secundaria+=matriz[i][p];
		p--;
	}
	if(principal==secundaria){
		for(int i=0;i<3;i++){
			linha=coluna=0;
			for(int j=0;j<3;j++){
				coluna+=matriz[j][i];
				linha+=matriz[i][j];
			}
			if(coluna!=principal or linha!=principal){
				condicao=false;
				cout << "NAO\n";
				break;
			}
		}
	}else{
		condicao=false;
		cout << "NAO\n";
	}
	if(condicao){
		cout << "SIM\n";
	}
}
