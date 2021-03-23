#include <iostream>
#include <vector>
using namespace std;

int main(void){
	//vector<vector<int>>matriz(3,vector<int>(3));
	vector < vector <int> > matriz(3, vector<int> (3));
	int cont=0;
	for(int i=0;i<3;i++){
		int soma=0;
		for(int j=0;j<3;j++){
			cin >> matriz[i][j];
			soma+=matriz[i][j];
		}
		cout << "Linha " << cont << ": " << soma << endl;
		cont++;
	}
}
