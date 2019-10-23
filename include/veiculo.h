#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H



#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>



using namespace std;

class veiculo{
	private: 
		string marca; 
		double preco;
		string chassi; 
		

//Getters e Setters
	public: 	

		string getMarca();
		string setMarca(string marca_); 
		double getPreco();
		double setPreco(double preco_); 
		string getChassi();
		string setChassi(string chassi_);

	
};




#endif // AUTOMOVEL_H