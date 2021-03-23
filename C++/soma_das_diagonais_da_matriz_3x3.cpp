#include <iostream>
#include <vector>
using namespace std;

int main(void){
	vector< vector<int> > matriz(3, vector<int>(3));
	int principal=0, secundaria=0, p=2;
	for(int i=0;i<3;i++){for(int j=0;j<3;j++)cin>> matriz[i][j];}
	for(int i=0;i<3;i++){
		principal+=matriz[i][i];
		secundaria+=matriz[i][p];
		p--;
	}
	cout << "Diagonal principal: " << principal << endl;
	cout << "Diagonal secundaria: " << secundaria << endl;
}
