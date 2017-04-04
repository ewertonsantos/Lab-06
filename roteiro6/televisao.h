#ifndef TELEVISAO_H_
#define TELEVISAO_H_

class Televisao{
private:
    int canal=5, volume=0;
public:
    void escolherCanal();
    void aumentarVolume();
    void diminuirVolume();
    int getCanal();
    int getVolume();

};


#endif // TELEVISAO_H_
