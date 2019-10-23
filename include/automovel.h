#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H



#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>



using namespace std;

class automovel : public veiculo{
	private: 
		int tipo_motor;  
		

	public: 
		static int numeroCarros;

		automovel();
		automovel(string marca, double preco, string chassi, int tipo_motor);
		~automovel();


		friend ostream& operator << (ostream &o, automovel &veiculo);

		bool operator==(const automovel &autom) const;

		bool operator==(const string &marca) const;
	
};




#endif // AUTOMOVEL_H
