#include <iostream>

int main(){
	
	int numero = 0;
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	
	if (numero > 20 ){
		std::cout << "numero maior que 20!";	
	}
	
	else { 
		std::cout << "Tente novamente!";
	}
	
	return 0;
	
}