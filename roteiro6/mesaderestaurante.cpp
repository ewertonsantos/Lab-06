#include <iostream>
#include <string>
#include "mesaderestaurante.h"
#include "pedido.h"

using namespace std;

int MesaDeRestaurante::aux = 0;

void MesaDeRestaurante::adicionaAoPedido(){
    cout << "Escreva o numero do pedido: " << endl;
    cin >> p[aux].numero;

    cout << "Escreva a descricao do pedido: " << endl;
    cin >> p[aux].descricao;

    cout << "Escreva a quantidade: " << endl;
    cin >> p[aux].quantidade;

    cout << "Escreva o valor: " << endl;
    cin >> p[aux].preco;

    aux++;
}

void MesaDeRestaurante::zeraPedidos(){
    int i;
    for (i = 0; i<aux; i++){
            p[i].numero = 0;
            p[i].descricao = "";
            p[i].quantidade = 0;
            p[i].preco = 0.0;

    }
}

float MesaDeRestaurante::calculaTotal(){

    float valor = 0.0;
    int a;

    for(a=0; a<aux; a++){
        valor += p[a].preco * p[a].quantidade;
    }

    return valor;

}








