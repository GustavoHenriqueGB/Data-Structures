#include "Pilha.h"

using namespace std;

Pilha::Pilha(){
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
}

Pilha::~Pilha(){
    delete [] estrutura;
}

bool Pilha::estaCheia(){
    return (tamanho == max_itens);
}

bool Pilha::estaVazia(){
    return (tamanho == 0);
}

void Pilha::empilhar(TipoItem item){
    if(!(estaCheia())){
        estrutura[tamanho] = item;
        tamanho++;
        
        }else{
            cout << "A Pilha está cheia\n";
        }    
}

void Pilha::desempilhar(){
    if(!(estaVazia())){
        estrutura[-1]; 
        tamanho--;
    
    }else{
        cout << "A Pilha está vazia\n";
    }
}

TipoItem Pilha::topo(){
    return estrutura[tamanho - 1];
}

int Pilha::qualTamanho(){
    return tamanho;
}

void Pilha::imprimir(){
    cout << "Pilha: [ ";
    for(int i = 0; i < tamanho; i++){
        cout << estrutura[i] << ' ';
    }
    cout << "]\n";
}
