#ifndef MESADERESTAURANTE_H_
#define MESADERESTAURANTE_H_
#define TAM 200
#include "pedido.h"
#include <iostream>

class MesaDeRestaurante{
    private:
        Pedido p[TAM];
        static int aux;
    public:
        void adicionaAoPedido();
        void zeraPedidos();
        float calculaTotal();

};


#endif // MESADERESTAURANTE_H_
