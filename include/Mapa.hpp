#pragma once
#include <Dibujos.hpp>
#include <Actualizable.hpp>

#include <curses.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

class Mapa : public Dibujos, public Actualizable
{
private:
public:
    Mapa() : Dibujos("Suelo")
    {
    }
    Mapa(int x, int y) : Dibujos(x, y, "Suelo")
    {

    }
    void Actualizar()
    {

        // for (int i = 0; i < 2000; i++)
        // {
        //     this->x += i;
        // }
    }
    ~Mapa() {}
};