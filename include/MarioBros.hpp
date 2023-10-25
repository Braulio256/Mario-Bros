#pragma once
#include <Dibujos.hpp>
#include <Actualizable.hpp>

using namespace std;

class MarioBros : public Dibujos, public Actualizable
{
private:
public:
    MarioBros() : Dibujos("MarioDePie")
    {
    }
    MarioBros(int x, int y) : Dibujos(x, y, "MarioDePie")
    {
    }

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
    ~MarioBros() {}
};