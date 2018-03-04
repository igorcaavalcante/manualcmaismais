#include <iostream>
#include <locale.h>

int main() {
	using namespace std;
	setlocale(LC_ALL, "Portuguese"); //definindo o idioma português

	int inteiro = 10;
	cout << "O número inteiro " << inteiro << " ocupa " << sizeof(inteiro) << " bytes na memória " << endl;

	char caractere = 'a';
	cout << "O caractere '" << caractere << "' ocupa " << sizeof(caractere) << " bytes na memória." << endl;

	char outrocaractere = 120;
	cout << "A variável outrocaractere guarda o caractere correspondente ao valor 120 da tabela ASCII: " << outrocaractere << endl;

	float real = 0.99999;
	cout << "O real " << real << " ocupa " << sizeof(real) << " bytes na memória." << endl;

	double realmaispreciso = 0.515645154654258;
	cout << "Já o double " << realmaispreciso << " ocupa " << sizeof(realmaispreciso) << " bytes" << endl;

	bool booleano1 = true;
	bool booleano2 = 0;
	cout << "O booleano1 tem valor " << booleano1 << " pq é true. \nO booleano2 tem valor " << booleano2 << " pq é false. \n";

	bool booleano3 = 1154;
	cout << "Qualquer valor diferente de zero é true, o que aconteceu no booleano3: " << booleano3 << endl;
	return 0;
}
