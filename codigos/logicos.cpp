#include <iostream>

/*Programa para exemplificar o uso dos operadores L�gicos*/

int main() {
	using namespace std;
	int A=1, B=2, C=1, D=5; //Declarando as vari�veis 
	
	if((A<B) || (A==B)){
		//Entra aqui, pois pelo menos uma compara��o � verdadeira!
	}
	if((A>B) || (A!=C)){
		//N�O entra aqui, pois nenhuma compara��o � verdadeira!
	}
	if((A<B) || (A!=B)){
		//Entra aqui, pois as duas compara��es s�o verdadeiras!
	}
	if((A<B) && (A!=B)){
		//Entra aqui, pois as duas compara��es s�o verdadeiras!
	}
	if((A<B) && (A==B)){
		//N�O entra aqui, pois uma das duas � falsa!
	}
	if((A<B) && (A==C) && (A!=D) && (B<A)){
		//N�O entra aqui, pois uma delas � falsa!
	}
	if((A<B) && ((A<B) || (D>B)) && (A!=D) && ((A<B) || (B<C))){
		//Entra aqui, pois as TODAS compara��es s�o verdadeiras!
	}
	return 0;
}
