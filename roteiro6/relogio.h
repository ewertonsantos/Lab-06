#ifndef RELOGIO_H_
#define RELOGIO_H_


class Relogio{
private:
    int hora, minuto, segundo;
public:
    void setHorario(int h, int m, int s);
    int getHora();
    int getMinuto();
    int getSegundo();
    void avancarHorario();
};
#endif // RELOGIO_H_
