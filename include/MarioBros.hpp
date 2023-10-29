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

class MarioBros : public Dibujos, public Actualizable
{
private:
    int i = 0;
    int j = 0;

public:
    MarioBros() : Dibujos("MarioDePie")
    {
    }
    MarioBros(int x, int y) : Dibujos(x, y, "MarioDePie")
    {
    }
    ~MarioBros() {}
    void Actualizar()
    {
        // this->x += 1;
        // this->y += 1;
    }
    void DesplazarIzquierda()
    {
        this->x -= 1;
    }
    void DesplazarDerecha()
    {
        this->x += 1;
    }
    void Saltar()
    {
        for (i = 0; i < 24; i++)
        {
            this->y += i;
            
        }
        
    }

    void NoSaltar()
    {
        this->y = 7;
    }
};