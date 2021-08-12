#include<iostream>

using namespace std;

float C = 0;
float F (){

return ((9 * C) + 160) / 5 ; 
	
}
int main (){

cout << "Digite a temperatura em Celcius para fazer a conversao: ";
cin >> C;

cout << F() << " essa e a temperatura em Fahrenheit";
}