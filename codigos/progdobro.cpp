#include <iostream>

/* Este programa serve para exemplificar o uso de variáveis mostrando o dobro de 10.*/

int main() {
	
	//Definindo o namespace:
	using namespace std;
	
	//Declarando a variável inteira com valor = 10:
	int x = 10;
	
	//Declarando uma variável que conterá o resultado do cálculo do dobro:
	int dobro;
	
	//Atribuindo o valor do cálculo para essa variável:
	dobro = x*2;
	
	//Mostrando seu dobro:
	cout << "O valor de 10 é " << dobro;
	
	return 0;
}
