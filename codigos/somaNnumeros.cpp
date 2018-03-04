#include <iostream>

//Programa que pede e mostra a soma de números até que o usuário digite 0

int main(){
	using namespace std;
	
	int soma = 0; //guardará a soma dos números
	int numero; //guardará o número a ser somado
	
	cout << "Digite um valor (0 para encerrar): ";
	cin >> numero;
	
	while(numero!=0){
		soma += numero; //mesma coisa que -> "soma = soma + numero"
		
		cout << "Digite outro valor (0 para encerrar): ";
		cin >> numero;
		
	}

	cout << "A soma dos números digitados foi = " << soma;
	
	return 0;
}
