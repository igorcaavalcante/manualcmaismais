#include <iostream>

//Programa que pede e mostra a soma de 10 números

int main(){
	using namespace std;
	
	int contador = 1; //contará os loops
	int soma = 0; //guardará a soma dos nÃºmeros
	
	int numero; //guardará o nÃºmero que foi digitado
	//observe que não precisamos guardar todos os números, apenas a soma deles
	
	do{
		cout << "Digite o " << contador << "º numero -> ";
		cin >> numero;
	
		soma += numero; //mesma coisa que -> "soma = soma + numero"
		
		contador++; //adicionando uma unidade ao contador
		
	}while(contador <= 10);

	cout << "A soma foi = " << soma;
	
	return 0;
}
