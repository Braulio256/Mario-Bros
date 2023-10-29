#include <Dibujos.hpp>
#include <Ventana.hpp>
#include <MarioBros.hpp>
#include <Mapa.hpp>

#include <curses.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    Ventana ventana;
    MarioBros mario;
    Mapa mapa;

    MarioBros* mario1 = new MarioBros(1, 7);
    Mapa* mapa1 = new Mapa(1, 23);
    // Vaca* vaca3 = new Vaca(0, 8);

    list<Dibujos *> dibujos;
    dibujos.push_back(mario1);
    dibujos.push_back(mapa1);
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
        mapa1->Actualizar();
        
        
        
        if (ascii == 'q' || ascii == 'Q')
            break;

        if (ascii == 'a' || ascii == 'A' || ascii == KEY_LEFT)
        {
            mario1->DesplazarIzquierda();
        }
        if (ascii == 'd' || ascii == 'D' || ascii == KEY_RIGHT)
        {
            // if (ascii == 'd' || ascii == 'D' || ascii == KEY_RIGHT)
            // {
            //    mario1-> = ("MarioCaminando1");
            // }
            
            mario1->DesplazarDerecha();
        }
        if (ascii == ' ' || ascii == 'w' || ascii == 'W' || ascii == KEY_UP){
            mario1->Saltar();
        }
        
        if (ascii == 's' || ascii == 'S' || ascii == KEY_DOWN){
            mario1->NoSaltar();
        }

        refresh();

        ventana.Actualizar(Actualizables);
        ventana.Dibujar(dibujos);        
        
    }

    return 0;
}