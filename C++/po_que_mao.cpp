#include <iostream> // erro no tempo de execução
using namespace std;

int main(void){
	int n=0, doces=0, p1=0, p2=0, p3=0;
	cin >> doces >> p1 >> p2 >> p3;
	if(doces >= (p1+p2+p3)){
		cout << "3\n";
	}else if((doces>=p1)or(doces>=p2)or(doces>=p3)){
		if((doces>=(p1+p2)) or (doces>=(p1+p3)) or (doces>=(p3+p2))){
			cout << "2\n";
		}else{
			cout << "1" << endl;
		}
	}
}
