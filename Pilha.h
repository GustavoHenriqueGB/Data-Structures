#include <vector>
#include <iostream>

typedef int TipoItem;
const int max_itens = 100;

using namespace std;

class Pilha{
    private:
        TipoItem* estrutura;
        int tamanho;
    
    public:
        Pilha(); // Construtora
        ~Pilha();  // Destrutora
        bool estaCheia(); // Verifica se a Pilha está cheia
        bool estaVazia(); // Verifica se a Pilha está vazia
        void empilhar(TipoItem item); // Adiciona um item à Pilha
        void desempilhar(); // Remove um item da Pilha
        TipoItem topo(); // Retorna um item da Pilha
        int qualTamanho(); // Retorna o tamanho da Pilha
        void imprimir(); // Imprime toda a Pilha
};