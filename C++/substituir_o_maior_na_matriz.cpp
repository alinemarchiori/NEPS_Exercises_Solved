#include <iostream>

using namespace std;

int main(){
	int matriz[3][3], maior=-100000, valor;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> matriz[i][j];
			if(matriz[i][j]>maior){
				maior=matriz[i][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(matriz[i][j]==maior){
				matriz[i][j]=-1;
			}
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}
