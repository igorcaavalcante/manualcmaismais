#include <iostream>

//Programa que pede e mostra a soma de 10 n�meros

int main(){
	using namespace std;
	
	int contador = 1; //contar� os loops
	int soma = 0; //guardar� a soma dos números
	
	int numero; //guardar� o número que foi digitado
	//observe que n�o precisamos guardar todos os n�meros, apenas a soma deles
	
	do{
		cout << "Digite o " << contador << "� numero -> ";
		cin >> numero;
	
		soma += numero; //mesma coisa que -> "soma = soma + numero"
		
		contador++; //adicionando uma unidade ao contador
		
	}while(contador <= 10);

	cout << "A soma foi = " << soma;
	
	return 0;
}
