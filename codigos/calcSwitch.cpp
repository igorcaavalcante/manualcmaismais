#include <iostream>

/*Calculadora com switch case*/

int main(){
	using namespace std;
	
	char operacao; // a operação desejada
	float n1, n2; // os dois números
	
	cout << "Digite um numero: > ";
	cin >> n1;
	cout << "Digite outro numero > ";
	cin >> n2;
	
	cout << "Digite a operacao: > ";
	cin >> operacao;
	
	switch(operacao){
		case '/': cout << n1 << "/" << n2 << "=" << n1/n2 << endl; break;
		case '+': cout << n1 << "+" << n2 << "=" << n1+n2 << endl; break;
		case '-': cout << n1 << "-" << n2 << "=" << n1-n2 << endl; break;
		case '*': cout << n1 << "*" << n2 << "=" << n1*n2 << endl; break;

		default: cout << "Opcao invalida, seu burro!";
	}
	return 0;
}
