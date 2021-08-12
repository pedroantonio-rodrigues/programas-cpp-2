#include<iostream>

float tempo = 0;
float velocidade_media = 0;
float km_por_litro = 12;



float distancia (){
return tempo * velocidade_media; 
}


float litros_usados (){
	return distancia () / 12;
}


int main (){
	std::cout << "digite o tempo da viagem: ";
	std::cin >> tempo;
	
	std::cout << "digite a velocidade media: ";
	std::cin >> velocidade_media;
	
	std::cout <<  "distancia: " << distancia() << "\n litros usados: " << litros_usados();
	
	
	
	
}

