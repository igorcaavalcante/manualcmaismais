#include <iostream>

//Programa que pede e mostra a soma de n�meros at� que o usu�rio digite 0

int main(){
	using namespace std;
	
	int soma = 0; //guardar� a soma dos n�meros
	int numero; //guardar� o n�mero a ser somado
	
	cout << "Digite um valor (0 para encerrar): ";
	cin >> numero;
	
	while(numero!=0){
		soma += numero; //mesma coisa que -> "soma = soma + numero"
		
		cout << "Digite outro valor (0 para encerrar): ";
		cin >> numero;
		
	}

	cout << "A soma dos n�meros digitados foi = " << soma;
	
	return 0;
}
