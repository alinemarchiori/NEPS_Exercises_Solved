#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, s, result;
	cin >> a >> s;
	result = pow(a,s);
	cout.precision(4);
	cout << fixed << result << endl;
	return 0;
}
