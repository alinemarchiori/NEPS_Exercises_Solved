#include <iostream>

using namespace std;

int main(){
	int latas, copos, total, bandejas;
	cin >> bandejas;
	while(bandejas>0){
		cin >> latas >> copos;
		if(latas>copos){
			total=total+copos;
		}
		bandejas--;
	}
	cout << total << endl;
	return 0;
}
