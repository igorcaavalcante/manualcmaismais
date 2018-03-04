#include <iostream>

/*Programa que simula um caixa automático para 
exemplificar o uso do switch...case...*/

int main(){
	using namespace std;
	float saldo = 100; //Defini um saldo de R$100
	float valor; //Usaremos para operações de saque/deposito
	int opcao_selecionada; //Usaremos para guardar a opção desejada
	
	cout << "/********Caixa automatico********/" << endl; //Só pra deixar bunito 
	cout << "\nO que deseja fazer?: \n1-Saldo \n2-Saque \n3-Deposito \n>>";
	cin >> opcao_selecionada;
	
	switch(opcao_selecionada){
		case 1: cout << "Seu saldo eh: " << saldo; break; //dá pra fazer assim em uma linha
			
		//mas assim fica mais legível:
		case 2: 
			cout << "Qual valor a ser sacado? >> R$";
			cin >> valor;
			if(valor <= saldo){
				saldo -= valor; // <-Isso é a mesma coisa que isto-> saque = saque - valor; !!!
				cout << "Saque efetuado com sucesso! Novo saldo: " << saldo;
			}else{
				cout << "Saldo insuficiente!";
			}
			break;
			
		default: cout << "O numero digitado nao corresponde a nenhuma opcao";
	}
	system("PAUSE");
	return 0;
}
