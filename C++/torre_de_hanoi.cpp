#include <iostream> //demora muito, é necessário otimizar
using namespace std;

int contador;

void move_disco(int dis){
	if(dis==1){
		contador++;
	}else{
		move_disco(dis-1);
		contador+=1;
		move_disco(dis-1);
	}
}

int main(){
	int discos=0, testes=0;
	while(true){
		contador=0;
		cin >> discos;
		if(discos==0){
			break;
		}else{
			move_disco(discos);
		}
		cout << "Teste " << ++testes << endl;
		cout << contador << endl;
	}
	return 0;
}
