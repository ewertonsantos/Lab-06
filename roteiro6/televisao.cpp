#include <iostream>
#include "televisao.h"
using namespace std;

int Televisao::getCanal(){
    return canal;
}

int Televisao::getVolume(){
    return volume;
}

void Televisao::escolherCanal(){
int x;
cout << "Escolha a opcao desejada: "
     << "(1) para avancar o canal;"
     << "(2) para voltar o canal;"
     << "(3) para escolher canal;" << endl;

cin >> x;

    switch (x){
    case 1:
        canal++;
        cout << "Canal: " << canal << endl;
        break;
    case 2:
        canal--;
        cout << "Canal: " << canal << endl;
        break;
    case 3:
        cout << "Informe o canal desejado: " << endl;
        cin >> x;
        canal = x;
        cout << "Canal: " << canal << endl;
        break;
    }
}

void Televisao::aumentarVolume(){
volume++;
if (volume > 100){
    volume=100;

}
cout << "Volume: " << volume << endl;
}

void Televisao::diminuirVolume(){
volume--;
if (volume < 0){
    volume=0;
}
cout << "Volume: " << volume << endl;
}
