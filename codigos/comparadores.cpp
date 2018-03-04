#include <iostream>

/*Programa para exemplificar o uso de operadores de comparação*/

int main() {
	using namespace std;
	
	int A, B; //Declarando as variáveis
	
	//Lendo os valores das variáveis:
	cout << "Digite um valor para A: ";
	cin >> A;
	cout << "Digite um valor para B: ";
	cin >> B;
	
	//Podemos realizar as seguintes comparações:
	
	if(A > B)
		cout << "A eh maior que B!";
	if(A < B)
		cout << "A eh menor que B!";
		
	if(A <= B)
		cout << "A eh menor ou igual a B!";
	if(A >= B)
		cout << "A eh maior ou igual a B!";
		
	if(A == B)
		cout << "A eh igual a B!";
	if(A != B)
		cout << "A eh diferente de B!";
		
	return 0;
}
