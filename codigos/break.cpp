#include <iostream>

/*Programa que justifica o uso do break*/

int main(){
	using namespace std;
	
	int numero;
	
	cout << "Digite um numero: ";
	cin >> numero;
	
	switch(numero){
		case 1: cout << "Vc digitou o numero 1." << endl;
		case 2: cout << "Vc digitou o numero 2." << endl;
		case 3: cout << "Vc digitou o numero 3." << endl;
		case 4: cout << "Vc digitou o numero 4." << endl;
		case 5: cout << "Vc digitou o numero 5." << endl;

		default: cout << "Vc digitou um numero maior que 5 ou menor que 1.";
	}
	return 0;
}
