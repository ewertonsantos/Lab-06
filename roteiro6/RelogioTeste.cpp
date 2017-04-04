#include <iostream>
#include "relogio.h"
using namespace std;


int main(){
    int h, m, s;
    cin>>h >> m >> s;

Relogio teste;
teste.setHorario(h,m,s);
teste.avancarHorario();

}
