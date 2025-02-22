#include <iostream>
#include "Pilha.h"

using namespace std;

int main(){
    
    Pilha pilha1;
    TipoItem item;
    int opcao;

    cout << "Programa gerador de Pilhas\n";
    do{
        cout << "Digite 0 para sair do programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!!\n";
        cout << "Digite 3 para imprimir a pilha!\n";
        cin >> opcao;

        switch (opcao){
            case 1:
                cout << "Qual item deseja inserir na lista?\n";
                cin >> item;
                pilha1.empilhar(item);
                break;

            case 2:
                item = pilha1.topo();
                pilha1.desempilhar();
                cout << "Elemento removido: " <<  item;
                break;  

            case 3:
                pilha1.imprimir();
                break;  

            default:
                break;
        }
    }
    while(opcao != 0);
    
    cout << "Você está saindo do programa!\n";

    return 0;
}