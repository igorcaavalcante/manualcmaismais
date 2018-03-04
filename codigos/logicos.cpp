#include <iostream>

/*Programa para exemplificar o uso dos operadores Lógicos*/

int main() {
	using namespace std;
	int A=1, B=2, C=1, D=5; //Declarando as variáveis 
	
	if((A<B) || (A==B)){
		//Entra aqui, pois pelo menos uma comparação é verdadeira!
	}
	if((A>B) || (A!=C)){
		//NÃO entra aqui, pois nenhuma comparação é verdadeira!
	}
	if((A<B) || (A!=B)){
		//Entra aqui, pois as duas comparações são verdadeiras!
	}
	if((A<B) && (A!=B)){
		//Entra aqui, pois as duas comparações são verdadeiras!
	}
	if((A<B) && (A==B)){
		//NÃO entra aqui, pois uma das duas é falsa!
	}
	if((A<B) && (A==C) && (A!=D) && (B<A)){
		//NÃO entra aqui, pois uma delas é falsa!
	}
	if((A<B) && ((A<B) || (D>B)) && (A!=D) && ((A<B) || (B<C))){
		//Entra aqui, pois as TODAS comparações são verdadeiras!
	}
	return 0;
}
