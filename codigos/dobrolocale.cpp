#include <iostream>
#include <locale.h>

int main() {
	
	using namespace std;
	
	setlocale(LC_ALL, "Portuguese");
	
	int x = 10;
	
	cout << "O valor de x é " << x << " e seu dobro é " << x*2;
	
	return 0;
}
