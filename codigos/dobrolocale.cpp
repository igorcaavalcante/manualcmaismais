#include <iostream>
#include <locale.h>

int main() {
	
	using namespace std;
	
	setlocale(LC_ALL, "Portuguese");
	
	int x = 10;
	
	cout << "O valor de x � " << x << " e seu dobro � " << x*2;
	
	return 0;
}
