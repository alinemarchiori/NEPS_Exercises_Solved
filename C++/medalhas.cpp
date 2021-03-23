#include <iostream>
#include <algorithm>
using namespace std;
struct Competidor{
	int pontos, id;
};
int ordena(Competidor x, Competidor y){
	return x.pontos<y.pontos;
}
int main(void){
	Competidor p[10];
	for(int i=1;i<=3;i++){
		cin >> p[i].pontos;
		p[i].id=i;
	}
	sort(p+1,p+4,ordena);
	for(int i=1;i<=3;i++){
		cout << p[i].id << endl;
	}
}
