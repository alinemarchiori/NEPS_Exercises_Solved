#include <iostream>
using namespace std;

int main (){
	int cont=0, i=0, x=0;
	while(i<3){
		cin >> x;
		if((x%2)==0 or (x%5)==0){
			cont++;
		}
		i++;
	}
	cout << cont << endl;
	return 0;
}
