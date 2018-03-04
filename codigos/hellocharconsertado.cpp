#include <iostream>

using namespace std;

int main(){
	
	char resposta;
	int a, b;
	
	cout << "Voce quer fazer uma soma? Digite: S - SIM | N - NAO -> ";
	cin >> resposta;
	
	if(toupper(resposta) == 'S'){
		cout << "Digite o primeiro valor: ";
		cin >> a;
		cout << "Digite o primeiro valor: ";
		cin >> b;
		cout << a << " + " << b << " = " << a+b << endl;
	}

	else{
		if(toupper(resposta) == 'N')
			cout << "Entao pq executou esse programa??" << endl;
		else
			cout << "Nao ha opcao correspondente a letra digitada, idiota." << endl;
	}
}
