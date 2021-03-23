#include <iostream>//deu certo
using namespace std;

int main(){
	int k=0, som=0, soma=0, somalinha=0, somacoluna=0, p=0;
	cin >> k;
	int mat[k][k], i, j, primeira=0, segunda=0, condicao=0;
	for(i=0;i<k;i++){//obtendo a matriz
		for(j=0;j<k;j++){
			cin >> mat[i][j];
		}
	}
	p=k-1;
	for(i=0;i<k;i++){//obtendo a soma da diagonal principal e secundaria
		primeira = primeira+mat[i][i];
		segunda = segunda + mat[i][p];
		p--;
	}
	for(i=0;i<k;i++){
		soma=0;
		som=0;
		for(j=0;j<k;j++){
			som = som + mat[i][j];//somando a linha 
			soma = soma + mat[j][i];//somando a coluna
		}
		if(i==0){
			somalinha=som;
			somacoluna=soma;
		}
		else{
			if(som!=somalinha or soma!=somacoluna or soma!=primeira or som!=primeira or soma!=segunda or som!=segunda){
				condicao = 1;
				cout << "-1\n";
				break;
			}
		}
	}
	if(condicao==0){
		cout << soma << endl;
	}
	return 0;
}
