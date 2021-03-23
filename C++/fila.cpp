#include <iostream>// não deu certo, ou usar vetor, ou iterator
#include <vector>
using namespace std;

int main(void){
	vector<int> num1;
	vector<int> num2, certo;
	int n=0, tamanho1=0, a=0, tamanho2=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a;
		num1.push_back(a);
	}
	tamanho1=num1.size();
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a;
		num2.push_back(a);
	}
	tamanho2=num2.size();
	for(int i=0;i<=tamanho1;i++){
		for(int j=0;j<=tamanho2;j++){
			if(num1.at(i)==num2.at(j)){
				
			}
		}
	}
	for(int i=0;i<=num1.size();i++){
		cout << num1[i];
	}
}
