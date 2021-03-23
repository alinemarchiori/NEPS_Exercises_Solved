#include <iostream>
using namespace std;

int fibonacci(int x);

int main (){
	int valor, resultado=0;
	cin >> valor;
	if(valor==0){
		resultado=1;
	}
	for(int i=1;i<valor;i++){
		resultado = fibonacci(i+1);
	}
	cout << resultado << endl;
	return 0;
}
int fibonacci(int n){
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 2;
	}
	else{
		int fib = fibonacci(n-1)+fibonacci(n-2);
		return fib;
	}
}
