#include<bits/stdc++.h>

using namespace std;

class carro{
	private:
		int ano;
		float valor, km;

	public:
	
		carro(int a, float v, float k);

		void setAno(int a);
		int getAno();

		void setValor(int v);
		float getValor();

		void setKm(int k);
		float getKm();
};

int main(){
	carro palio(1995, 12000, 150000);

	cout << "Palio: \n";
	cout << "Ano: " << palio.getAno() << "\n";
	cout << "Valor: " << palio.getValor() << "\n";
	cout << "Quilometragem: " << palio.getKm () << "\n\n";

	carro celta(2002, 17000, 70000);

	cout << "Celta: \n";
	cout << "Ano: " << celta.getAno() << "\n";
	cout << "Valor: " << celta.getValor() << "\n";
	cout << "Quilometragem: " << celta.getKm () << "\n\n";

	return 0;
}



	carro::carro(int a = 0, float v = -1, float k = -1) {
		ano = a;
		valor = v;
		km = k;
	}

	void carro::setAno(int a){
		ano = a;
	}
	int carro::getAno(){
		return ano;
	}

	void carro::setValor(int v){
		valor = v;
	}
	float carro::getValor(){
		return valor;
	}

	void carro::setKm(int k){
		km = k;
	}
	float carro::getKm(){
		return km;
	}