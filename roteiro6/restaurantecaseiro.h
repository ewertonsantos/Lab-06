#ifndef RESTAURANTECASEIRO_H_
#define RESTAURANTECASEIRO_H_
#include <iostream>
#include "pedido.h"
#include "mesaderestaurante.h"
#define MESA 100

class RestauranteCaseiro{
public:
    MesaDeRestaurante mesas[MESA];
    void adicionaAoPedido();
    float calculaTotalRestaurante();
};

#endif // RESTAURANTECASEIRO_H
