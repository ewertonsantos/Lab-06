#include <iostream>
#include "mesaderestaurante.h"
#include "pedido.h"
#include "restaurantecaseiro.h"

using namespace std;

void RestauranteCaseiro::adicionaAoPedido(){
    int b = 0;
    cout << "Digite o numero de uma mesa: " << endl;
    cin >> b;

    mesas[b].adicionaAoPedido();

}

float RestauranteCaseiro::calculaTotalRestaurante(){
    int j;
    float total = 0.0;

    for(j = 0; j < MESA ; j++){
        total +=  mesas[j].calculaTotal();
    }
    return total;
}
