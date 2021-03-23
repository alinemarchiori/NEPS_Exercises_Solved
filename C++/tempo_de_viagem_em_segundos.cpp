#include <iostream>
using namespace std;

int main(){
	int di, ho, mi, d, h, m, segundos;
	cin >> di;
	cin >> ho;
	cin >> mi;
	cin >> d;
	cin >> h;
	cin >> m;
	segundos = (((d-di)*86400)+((h-ho)*3600)+(m-mi)*60);
	cout << segundos << endl;
	return 0;
}
