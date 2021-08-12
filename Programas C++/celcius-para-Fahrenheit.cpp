#include<iostream>

float F = 0;
float C (){
	
	return (( F - 32 ) * 5) / 9;
}

int main(){
	
std::cout << "digite a temperatura em Fahrenheit para ser convertida para celcius: ";
std::cin >> F;

std::cout << C() << " essa e a temperatura convertida.";	

}