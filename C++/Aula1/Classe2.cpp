#include<bits/stdc++.h>

using namespace std;

class carro {
	private:
		int ano;
		float valor, km;

	public:
	
		//Função Contrutora:
		carro(int a = 0, float v = -1, float k = -1) {
			ano = a;
			valor = v;
			km = k;
		}

		void setAno(int a){
			ano = a;
		}
		int getAno(){
			return ano;
		}

		void setValor(int v){
			valor = v;
		}
		float getValor(){
			return valor;
		}

		void setKm(int k){
			km = k;
		}
		float getKm(){
			return km;
		}

};

int main(){
	carro palio(1995, 12000, 150000);
	//palio.setAno(1995);
	//palio.setValor(12000);
	//palio.setKm(150000);

	cout << "Palio: \n";
	cout << "Ano: " << palio.getAno() << "\n";
	cout << "Valor: " << palio.getValor() << "\n";
	cout << "Quilometragem: " << palio.getKm () << "\n\n";

	carro celta(2002, 17000, 70000);
	//celta.setAno(2002);
	//celta.setValor(17000);
	//celta.setKm(70000);

	cout << "Celta: \n";
	cout << "Ano: " << celta.getAno() << "\n";
	cout << "Valor: " << celta.getValor() << "\n";
	cout << "Quilometragem: " << celta.getKm () << "\n\n";

	return 0;
}