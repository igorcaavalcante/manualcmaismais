#include <iostream>

/*Como usar as chaves*/

int main() {
	
	using namespace std;
	
	/*!TODAS! AS FORMAS ABAIXO ESTAO CORRETAS!*/ 
	
	if(x > y){
		cout << "X eh maior!";
	}
	
	else
	{
		cout << "Y eh maior!";
	}
	
	if(x > y){cout << "X eh maior!";}
	
	/* Caso seu bloco s� tenha um comando, voc� 
	pode deixar sem chaves (mas n�o � muito 
	indicado fazer isso...): */
	
	if(x < y) cout << "Y eh menor!";
	
	if (y > x)
		cout << "Y eh maior!"; return 0;

}
