#include <iostream>

//Programa que mostra os 50 primeiros pares

int main(){
	using namespace std;
	
	int x;
	
	for(x=0; x<=50; x++){
		if(x%2 == 0){ //se o resto da divisão de x por 2 for == 0 (se x for par)...
			cout << x << endl; //mostre x
		}
	}
	
	return 0;
}
