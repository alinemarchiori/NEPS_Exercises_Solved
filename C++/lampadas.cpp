#include <iostream>
using namespace std;

int main(){
	int cont1=0, cont2=0, casos, var;
	cin >> casos;
	while(casos>0){
		cin >> var;
		if(var==1){
			cont1++;
		}
		else{
			cont2++;
		}
		casos--;
	}
	if((cont1%2)==0){
		if((cont2%2)==0){
			cout << "0\n";
			cout << "0\n";
		}
		else{
			cout << "1\n";
			cout << "1\n";
		}
	}
	else{
		if((cont2%2)==0){
			cout << "1\n";
			cout << "0\n";
		}
		else{
			cout << "0\n";
			cout << "1\n";
		}
	}
	return 0;
}
