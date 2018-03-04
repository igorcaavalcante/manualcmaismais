#include <iostream>

//Programa que mostra o maior de dois numeros

int main(){

	using namespace std;
	
	int x, y;
	
	cout << "Digite o X: " << endl;
	cin >> x;
	
	cout << "Digite o Y: " << endl;
	cin >> y;
	
	if(x > y){
		cout << "X eh o maior!";
	}else{
		cout << "Y eh o maior!";
	}

	return 0;
}
