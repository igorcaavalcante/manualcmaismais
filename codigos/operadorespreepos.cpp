#include <iostream>
/*Programa para exemplificar a diferença entre
operadores pre e pos fixados*/

int main() {
	using namespace std;
	
	int A=1, B=2; //Declarando as variáveis
	
	A = B++; //NESTA LINHA, colocamos o valor de B (2) em A e DEPOIS incrementamos 1 em B
	cout << "A:" << A << " B:" << B << endl; //NESTA LINHA, B vale 3 pq ganhou 1 na linha anterior e A vale 2
	
	A = ++B; //NESTA LINHA, incrementamos 1 em B (agora vai valer 4 pq tinha 3 antes) e DEPOIS colocamos o valor (4) em A
	cout << "A:" << A << " B:" << B << endl; //NESTA LINHA, A e B tem o mesmo valor (4)
	
	return 0;
}
