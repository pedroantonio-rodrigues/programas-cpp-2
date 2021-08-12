#include <iostream>

using namespace std;

int main(){
	
	int numero1 = 0;
	int numero2 = 0;
	
	int soma = numero1 + numero2;
	
	cout << "Digite o primeiro numero: ";
	cin >> numero1;
	
	cout << "Digite o segundo numero: ";
	cin >> numero2;
	
	if (soma >= 15){
		cout << "total soma: " + soma;
		
	}else {
		cout << "tente novamente. ";
	}
	
	return 0;
}