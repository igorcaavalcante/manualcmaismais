#include <iostream>

/*Este programa serve para exemplificar os
cuidados que devemos ter na com as variáveis*/

int main() {
	using namespace std;
	
	//Quatro variáveis TOTALMENTE DIFERENTES:
	int aa, aA, Aa, AA;
		
	int kxz; //nome nada descritivo
	float media_aritimetica; //nome bem descritivo

	//Podemos usar _ e números:
	double _media, _media2, me2dia;
	
	//mas essas DÃO ERRO!!:
	float #soma, !numero1, 12media;
	
	//Isso vai dar ERRO:
	cout << "A media e: " << media;
	float media = 6.5;
	/*Pois tentamos usar a variável ANTES
	dela ter sido declarada!*/

	return 0;
}
