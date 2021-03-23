#include <iostream>
using namespace std;

int main(){
	int m, minutos, horas;
	cin >> m;
	horas=m/60;
	minutos=m%60;
	cout << horas << endl << minutos << endl;
	return 0;
}
