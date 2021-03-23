#include <iostream>
#include <cstring>
#include <algorithm>//não deu certo essa droga
using namespace std;

int main(void){
	int tentativas=0, contador=0;
	bool a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	string frase="";
	cin >> tentativas;
	while(tentativas>0){
		a=false,b=false,c=false,d=false,e=false,f=false,g=false,h=false,i=false,j=false,k=false,l=false,m=false,n=false,o=false,p=false,q=false,r=false,s=false,t=false,u=false,v=false,w=false,x=false,y=false,z=false;
		contador=1;
		while(getline(cin, frase)){
			if(frase!=""){
				break;
			}
		}
		for(int i=0;i<frase.size();i++){
			int teste = (int)frase[i];
	//		if(teste>96 and teste<123){
				if(teste == 97 and a == false){
					contador++;
					a=true;
				}else if(teste == 98 and b == false){
					contador++;
					b=true;
				}else if(teste == 99 and c == false){
					contador++;
					c=true;
				}else if(teste == 100 and d == false){
					contador++;
					d=true;
				}else if(teste == 101 and e == false){
					contador++;
					e=true;
				}else if(teste == 102 and f == false){
					contador++;
					f=true;
				}else if(teste == 103 and g == false){
					contador++;
					g=true;
				}else if(teste == 104 and h == false){
					contador++;
					h=true;
				}else if(teste == 105 and i == false){
					contador++;
					i=true;
				}else if(teste == 106 and j == false){
					contador++;
					j=true;
				}else if(teste == 107 and k == false){
					contador++;
					k=true;
				}else if(teste == 108 and l == false){
					contador++;
					l=true;
				}else if(teste == 109 and m == false){
					contador++;
					m=true;
				}else if(teste == 110 and n == false){
					contador++;
					n=true;
				}else if(teste == 111 and o == false){
					contador++;
					o=true;
				}else if(teste == 112 and p == false){
					contador++;
					p=true;
				}else if(teste == 113 and q == false){
					contador++;
					q=true;
				}else if(teste == 114 and r == false){
					contador++;
					r=true;
				}else if(teste == 115 and s == false){
					contador++;
					s=true;
				}else if(teste == 116 and t == false){
					contador++;
					t=true;
				}else if(teste == 117 and u == false){
					contador++;
					u=true;
				}else if(teste == 118 and v == false){
					contador++;
					v=true;
				}else if(teste == 119 and w == false){
					contador++;
					w=true;
				}else if(teste == 120 and x == false){
					contador++;
					x=true;
				}else if(teste == 121 and y == false){
					contador++;
					y=true;
				}else if(teste == 122 and z == false){
					contador++;
					z=true;
				}
		//	}
		}
		cout << contador << endl;
		if(contador==26){
			cout << "frase completa\n";
		}else if(contador >= 13){
			cout << "frase quase completa\n";
		}else{
			cout << "frase mal elaborada\n";
		}
		tentativas--;
	}	
}
