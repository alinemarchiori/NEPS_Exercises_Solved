#include <iostream>
using namespace std;
int main(){
	int bino, cino, soma;
	cin >> bino;
	cin >> cino;
	soma = bino+cino;
	if((soma%2)==0){
		cout << "Bino\n";
	}
	if((soma%2)!=0){
		cout << "Cino\n";
	}
	return 0;
}
