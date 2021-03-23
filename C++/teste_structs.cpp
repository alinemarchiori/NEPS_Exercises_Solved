#include <iostream>
using namespace std;

struct Carro{
	string nome;
	string cor;
	int velocidade;
	int potencia;
	int velocidade_maxima;
	
	void Insere(string name, string color, int velocity_max, int power){
		nome=name;
		cor=color;
		velocidade_maxima=velocity_max;
		potencia=power;
		velocidade=0;
	}
	void Mostra_Carro(){
		cout << "NOME ...............: " << nome << endl;
		cout << "COR ................: " << cor << endl;
		cout << "POTENCIA ...........: " << potencia << endl;
		cout << "VELOCIDADE ATUAL ...: " << velocidade << endl;
		cout << "VELOCIDADE MAXIMA ..: " << velocidade_maxima << endl;
		cout << endl;
	}
	void Muda_Velocidade(int v){
		velocidade=v;
		if(velocidade>velocidade_maxima){
			velocidade=velocidade_maxima;
		}
		if(velocidade<0){
			velocidade=0;
		}
	}
};

int main(void){
	Carro carro1, carro2, carro3;
	int po, vel_max;
	string no, co;
	cout << "Digite o nome do carro: \n";
	cin >> no;
	cout << "Digite a cor do carro: \n";
	cin >> co;
	cout << "Digite a potencia do carro: \n";
	cin >> po;
	cout << "Digite a velocidade maxima do carro: \n";
	cin >> vel_max;
	carro1.Insere(no, co, vel_max, po);
	carro1.Mostra_Carro();
}
