#pragma once

using namespace std;

class Mapa : public Dibujos, public Actualizable
{
private:
public:
    Mapa() : Dibujos("Suelo")
    {

    }
    ~Mapa() 
    {

    }
};