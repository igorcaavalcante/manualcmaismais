#include <iostream>

/*Este programa serve para exemplificar os
cuidados que devemos ter na com as vari�veis*/

int main() {
	using namespace std;
	
	//Quatro vari�veis TOTALMENTE DIFERENTES:
	int aa, aA, Aa, AA;
		
	int kxz; //nome nada descritivo
	float media_aritimetica; //nome bem descritivo

	//Podemos usar _ e n�meros:
	double _media, _media2, me2dia;
	
	//mas essas D�O ERRO!!:
	float #soma, !numero1, 12media;
	
	//Isso vai dar ERRO:
	cout << "A media e: " << media;
	float media = 6.5;
	/*Pois tentamos usar a vari�vel ANTES
	dela ter sido declarada!*/

	return 0;
}
