#pragma one
#include <Dibujos.hpp>

#include <curses.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

class Sprites : public Dibujos
{
private:
    int cuadroActual = 0;
    list<Dibujos *> cuadros;

public:
    Sprites(list<Dibujos *> cuadros)
    {
        this->cuadros = cuadros;
    }
    void Dibujar()
    {
        this->cuadros[cuadroActual].Dibujar();
    }
    ~Sprites()
    {
    }
};