#include <iostream>
/*Par ou ímpar?*/

int main() {
	using namespace std;
	
	int numero;
	
	cout << "Digite um numero: ";
	cin >> numero;
	
	if(numero%2==0){
		cout << "O numero " << numero << " eh par.";
	}else{
		cout << "O numero " << numero << " eh impar.";
	}
	
	return 0;
}
