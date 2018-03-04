#include <iostream>

//Exemplo de programa com if...else

int main(){
	using namespace std;
	
	int A, B;
	
	cout << "Digite os valores para A e B: ";
	cin >> A >> B;
	
	if(A>B){
		cout << "O maior valor eh " << A; 
	}else{
		cout << "O maior valor eh " << B;
	}
	
	return 0;
}




/*
#include <iostream>

//Exemplo de programa com operador ternário

int main(){
	using namespace std;
	
	int A, B, maior;
	
	cout << "Digite os valores para A e B: ";
	cin >> A >> B;
	
	maior = (A>B)? A : B;
	
	cout << "O maior valor eh " << maior;
	
	return 0;
}*/

