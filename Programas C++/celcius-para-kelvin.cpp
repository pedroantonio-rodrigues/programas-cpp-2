#include<iostream>

float C = 0;
float K(){
	
	return  (C + 273.15);
	
}

int main(){
	std::cout << "informe a temperatura em C para ser convertida em kelvin: ";
	std::cin >> C;
	
	std::cout << K() << " Essa e a temperatura convertida";
}