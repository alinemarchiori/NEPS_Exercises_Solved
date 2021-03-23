#include <iostream>
using namespace std;

int main(){
	int primeiro=0, segundo=0, terceiro=0, soma1=0, soma2=0, soma3=0;
	cin >> primeiro >> segundo >> terceiro;
	soma1 = (terceiro*4)+(segundo*2);
	soma2 = (terceiro*2)+(primeiro*2);
	soma3 = (primeiro*4)+(segundo*2);
	if(soma1<soma2 and soma1<soma3){
		cout << soma1 << endl;
	}else if(soma3<soma2 and soma3<soma1){
		cout << soma3 << endl;
	}else{
		cout << soma2 << endl;
	}
	return 0;
}
