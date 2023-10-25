#include <Actualizable.hpp>

#include <curses.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

class Ventana
{
private:
public:
    Ventana()
    {
        initscr();
        noecho();
        curs_set(FALSE);
        cbreak();
        keypad(stdscr, TRUE);
        timeout(10);
    }

    void Actualizar(list<Actualizable *> Actualizables)
    {
        for (auto &&Actualizable : Actualizables)
        {
            Actualizable->Actualizar();
        }
        usleep(41000); // 0.041s / fotograma
    }

    void Dibujar(list<Dibujos *> dibujos)
    {

        clear();
        for (auto &&dibujo : dibujos)
        {
            dibujo->Dibujar();
        }

        box(stdscr, '|', '-');
        refresh();
    }

    ~Ventana()
    {
        keypad(stdscr, FALSE);
        endwin();
    }
};