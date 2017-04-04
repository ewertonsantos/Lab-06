#include "Restaurantecaseiro.h"
#include "Pedido.h"
#include "Mesaderestaurante.h"
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

void apresentaMenu()
{
    cout << "Digite o tipo de acao que deseja: " <<endl;
    cout << "(1) Para fazer um pedido " << endl;
    cout << "(2) Para zerar uma conta da mesa" << endl;
    cout << "(3) Para ver o total de cada mesa" << endl;
    cout << "(4) Para ver o total do restaurante" << endl;
    cout << "(0) Para fechar o programa" << endl;

}

int main()
{
    int x,i=1,y;
    RestauranteCaseiro restaurante;


    while(i){
        apresentaMenu();
        cin >> x;
        switch (x){
        case 0:
            i=0;
            break;
        case 1:
            restaurante.adicionaPedido();
            break;
        case 2:
            cout << "Digite a mesa: " << endl;
            cin >> y;
            restaurante.mesarestaurante[y].zeraPedido();
            cout << "Mesa zerada" << endl;
            break;
        case 3:
            cout << "Digite a mesa: " << endl;
            cin >> y;
            cout << "o total eh: " << restaurante.mesarestaurante[y].calculaTotal() << endl;
            break;
        case 4:
            cout << "o total eh: " << restaurante.calculaTotalRestaurante() << endl;
            break;
        }

    }
}
