#include <iostream>

/* Este programa serve para exemplificar o uso de vari�veis mostrando o dobro de 10.*/

int main() {
	
	//Definindo o namespace:
	using namespace std;
	
	//Declarando a vari�vel inteira com valor = 10:
	int x = 10;
	
	//Declarando uma vari�vel que conter� o resultado do c�lculo do dobro:
	int dobro;
	
	//Atribuindo o valor do c�lculo para essa vari�vel:
	dobro = x*2;
	
	//Mostrando seu dobro:
	cout << "O valor de 10 � " << dobro;
	
	return 0;
}
