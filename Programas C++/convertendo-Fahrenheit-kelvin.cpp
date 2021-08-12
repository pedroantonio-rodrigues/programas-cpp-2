#include<iostream>

float F = 0;

float K (){
	
	return (( F - 32 ) * 5) / 9;
}

int main (){
	std::cout << "Digite a temperatura em Fahrenheit para ser convertida para Kelvin: ";
	std::cin >> F;
	
	
	std::cout << " Esse e o valor em kelvin: " << (K() + 273.15) ; 
}