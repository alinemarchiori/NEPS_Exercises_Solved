#include <iostream>
using namespace std;

int main(){
	int n=0, maior=0, menor=1000000, y;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> y;
		if(y>maior){
			maior=y;
		}
		if(y<menor){
			menor=y;
		}
	}
	cout << maior << endl << menor << endl;
	return 0;
}
