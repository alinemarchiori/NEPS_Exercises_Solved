#include <iostream>
using namespace std;

int main (){
	int n=0, c=0, valor=0;
	cin >> n >> c;
	for(int i=0;i<n;i++){
		if(c>1){
			valor=valor+c;
			c--;
		}
		else{
			valor++;
		}
	}
	cout << valor << endl;
	return 0;
}
