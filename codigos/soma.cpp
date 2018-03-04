#include <iostream>
#include <locale.h>

//Programa que soma dois números informados pelo usuário

int main() {
	using namespace std;
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2, soma; //declarando as variáveis

	cout << "Digite o primeiro número: ";
	cin >> numero1; //colocando o primeiro número digitado na variável numero1

	cout << "Digite o segundo número: ";
	cin >> numero2; //colocando o segundo na numero2

	soma = numero1 + numero2; //fazendo a soma

	cout << "A soma dos dois números é " << soma; //exibindo o resultado da soma

	/*
		Poderia ter colocado a soma dentro do cout. Assim:
		cout << "A soma dos dois números é " << numero1 + numero2;
	*/

	return 0;
}

