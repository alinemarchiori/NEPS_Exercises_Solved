#include <iostream>
using namespace std;

int main (){
	int x=0, y=0, inteiras=0, cortadas=0;
	cin >> x;
	cin >> y;
	inteiras = (x*y)+((x-1)*(y-1));
	cortadas = ((x-1)*2)+((y-1)*2);
	cout << inteiras << endl;
	cout << cortadas << endl;
	return 0;
}
