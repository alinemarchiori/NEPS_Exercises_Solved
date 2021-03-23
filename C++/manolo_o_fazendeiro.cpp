#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n, li, ci, lf, cf, v, soma=0;
	cin >> n;
	vector< vector<int> > horta(n, vector<int>(n));
	for(int i=0;i<n;i++){for(int j=0;j<n;j++)cin >>horta[i][j];}
	cin >> v;
	for(int s=0;s<v;s++){
		cin >> li >> ci >> lf >> cf;
		int i, j;
		for(i=li-1;i<lf;i++){
			for(j=ci-1;j<cf;j++){
				soma+=horta[i][j];
				horta[i][j]=0;
			}
		}
	}
	cout << soma << endl;
}
