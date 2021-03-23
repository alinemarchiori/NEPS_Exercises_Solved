#include <iostream>
using namespace std;

int main(){
	float divisao=0, primeiro, segundo;
	cin >> primeiro;
	cin >> segundo;
	divisao = primeiro/segundo;
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << divisao << endl;
	return 0;
}
