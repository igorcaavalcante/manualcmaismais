#include <iostream>

/*Programa que simula um caixa autom�tico para 
exemplificar o uso do switch...case...*/

int main(){
	using namespace std;
	float saldo = 100; //Defini um saldo de R$100
	float valor; //Usaremos para opera��es de saque/deposito
	int opcao_selecionada; //Usaremos para guardar a op��o desejada
	
	cout << "/********Caixa automatico********/" << endl; //S� pra deixar bunito 
	cout << "\nO que deseja fazer?: \n1-Saldo \n2-Saque \n3-Deposito \n>>";
	cin >> opcao_selecionada;
	
	switch(opcao_selecionada){
		case 1: cout << "Seu saldo eh: " << saldo; break; //d� pra fazer assim em uma linha
			
		//mas assim fica mais leg�vel:
		case 2: 
			cout << "Qual valor a ser sacado? >> R$";
			cin >> valor;
			if(valor <= saldo){
				saldo -= valor; // <-Isso � a mesma coisa que isto-> saque = saque - valor; !!!
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
