#include "relogio.h"
#include <iostream>
using namespace std;

int Relogio::getHora(){
    return hora;
}

int Relogio::getMinuto(){
    return minuto;
}

int Relogio::getSegundo(){
    return segundo;
}

void Relogio::setHorario(int h, int m, int s){
    hora = h;
    minuto = m;
    segundo = s;
}

void Relogio::avancarHorario(){
    int h = getHora(), m = getMinuto(), s = getSegundo();

    if(h==23)
    {
        if(m == 59)
        {
            if(s == 59)
            {
                h = 0;
                m = 0;
                s = 0;
            }
            else{
                s++;
            }
        }
        else
         {
            if(s == 59)
            {
                m++;
                s = 0;
            }
            else{
                s++;
            }
        }
    }
    else
    {
        if(m == 59)
        {
            if(s == 59)
            {
                h++;
                m = 0;
                s = 0;
            }
            else{
                s++;
            }
        }
        else
         {
            if(s == 59)
            {
                m++;
                s = 0;
            }
            else{
                s++;
            }
        }
    }
    cout << h <<":" << m << ":" << s << endl;
}
