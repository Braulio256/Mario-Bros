#include <Dibujos.hpp>
#include <Ventana.hpp>
#include <MarioBros.hpp>

#include <curses.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{

    Ventana ventana;
    MarioBros mario;
    MarioBros *mario1 = new MarioBros(0, 0);
    // Vaca* vaca2 = new Vaca(0, 4);
    // Vaca* vaca3 = new Vaca(0, 8);

    // Arma *arma = new Arma();
    // Bala *bala = new Bala(0, 0);

    // mario1->RecogerArma(arma);

    list<Dibujos *> dibujos;
    dibujos.push_back(mario1);
    // dibujos.push_back(vaca2);
    // dibujos.push_back(vaca3);
    // dibujos.push_back(arma);
    // dibujos.push_back(bala);

    list<Actualizable *> Actualizables;
    Actualizables.push_back(mario1);
    // Actualizables.push_back(bala);
    // Actualizables.push_back(vaca3);

    getch();

    while (true)
    {

        int ascii = getch();
        if (ascii == 'q' || ascii == 'Q')
            break;

        if (ascii == 'a' || ascii == 'A' || ascii == KEY_LEFT)
        {
            mario1->DesplazarIzquierda();
        }
        if (ascii == 'd' || ascii == 'D' || ascii == KEY_RIGHT)
        {
            mario1->DesplazarDerecha();
        }
        // if (ascii == ' '){
        //     arma->Disparar();
        // }
        // if (ascii == 'p'){
        //     bala->CambiarDireccion();
        // }

        refresh();

        ventana.Actualizar(Actualizables);
        ventana.Dibujar(dibujos);
    }

    return 0;
}