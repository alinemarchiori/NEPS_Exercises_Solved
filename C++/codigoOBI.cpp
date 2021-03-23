#include <iostream>
using namespace std;

int main(){
	int vetor[1000], x=0, cont=0, contador=0, vezes=0;
	cin >> cont;
	while(cont>contador){
		cin >> x;
		vetor[contador]=x;
		contador++;
	}
	contador=0;
	vetor[cont]=2;
	while(cont>contador){
		if(vetor[contador]==1 and vetor[contador+1]==0 and vetor[contador+2]==0){
			vezes++;
			contador+=2;
		}
		else{
			contador++;
		}
	}
	cout << vezes << endl;
	return 0;
}
