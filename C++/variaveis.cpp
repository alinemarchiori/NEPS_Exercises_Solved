#include<iostream>
using namespace std;

int vaca, vaquinha; //variaveis globais

int main(){
	//variaveis locais
	 int numero=1;
	 char letra='c';
	 double num=1.333333;
	 float nume=1.5;
	 bool condicao=true;
	 string nome="Aline";
	
	cout << numero << "\n";
	cout << letra << "\n";
	cout << num << "\n";
	cout << nume << "\n";
	cout << condicao << "\n";
	cout << nome << "\n";
	
	cout << "Digite um valor:\n";
	cin >> numero;
	cout << "O valor digitado foi " << numero << "\n";
	
	system("pause");
	return 0;
}
