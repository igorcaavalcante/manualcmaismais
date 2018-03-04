#include <iostream>

using namespace std;

int main(){
	
	char resposta;
	int a, b;
	
	cout << "Voce quer fazer uma soma? Digite: S - SIM | N - NAO -> ";
	cin >> resposta;
	
	if(resposta == 'S'){
		cout << "Digite o primeiro valor: ";
		cin >> a;
		cout << "Digite o primeiro valor: ";
		cin >> b;
		cout << a << " + " << b << " = " << a+b << endl;
	}

	else{
		cout << "Entao pq executou esse programa???" << endl;
	}
}
