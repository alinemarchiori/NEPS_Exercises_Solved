#include <iostream>
using namespace std;

int main(){
	double r, primeiro=0.0, segundo=0.0;
	char letra;
	cin >> letra;
	cin >> primeiro >> segundo;
	if(letra == 'D'){
		r = primeiro/segundo;
	}
	if(letra == 'M'){
		r = primeiro*segundo;
	}
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << r << endl;
	return 0;
}
