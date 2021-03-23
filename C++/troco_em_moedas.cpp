#include <iostream>
using namespace std;

int main(){
	int c, umreal, cinquenta, vintecinco, dez, cinco, um, total;
	cin >> c;
	umreal = c/100;
	cinquenta = (c%100)/50;
	vintecinco = ((c%100)%50)/25;
	dez = (((c%100)%50)%25)/10;
	cinco = ((((c%100)%50)%25)%10)/5;
	um = ((((c%100)%50)%25)%10)%5;
	total = umreal + cinquenta + vintecinco + dez + cinco + um;
	cout << total << endl;
	cout << umreal << endl;
	cout << cinquenta << endl;
	cout << vintecinco << endl;
	cout << dez << endl;
	cout << cinco << endl;
	cout << um << endl;
	return 0;
}
