#include <iostream>
//Programa para exemplificar o uso das variáveis.
int main(){
	
	using namespace std;
	
	short int intpequeno;
	int intnormal;
	long int intgrande;
	cout << "Int pequeno ocupa " << sizeof(intpequeno) << " bytes." << endl;
	cout << "Int normal ocupa " << sizeof(intnormal) << " bytes." << endl; 
	cout << "Int grande ocupa " << sizeof(intgrande) << " bytes." << endl; 
	
	double doublenormal;
	long double doublegrande;
	cout << "Double normal ocupa " << sizeof(doublenormal) << " bytes." << endl;
	cout << "Double grande ocupa " << sizeof(doublegrande) << " bytes." << endl;
	
	signed int comsinal = -10;
	int intnormal2 = 10;
	unsigned int semsinal = 10;
	unsigned int intcomlixo = -10;
	cout << "Int com sinal: " << comsinal << " / Ocupa " << sizeof(comsinal) << " bytes." << endl;
	cout << "Int normal: " << intnormal2 << " / Ocupa " << sizeof(intnormal2) << " bytes." << endl;
	cout << "Int sem sinal: " << semsinal << " / Ocupa " << sizeof(semsinal) << " bytes." << endl;
	cout << "Int com lixo de memoria: " << intcomlixo << endl;
	
	return 0;
}
