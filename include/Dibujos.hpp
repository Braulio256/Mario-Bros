#pragma once
#include <curses.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Dibujos
{
private:
    fstream archivo;

protected:
    int x;
    int y;

public:
    Dibujos()
    {
        this->x = 0;
        this->y = 0;
    }
    Dibujos(int x, int y, string recurso)
    {
        archivo.open("./data/" + recurso + ".txt");
        this->x = x;
        this->y = y;
    }
    Dibujos(string recurso)
    {

        archivo.open("./data/" + recurso + ".txt");
        this->x = 0;
        this->y = 0;
    }

    void Dibujar()
    {
        string linea;

        move(this->y, this->x);
        while (getline(archivo, linea))
        {

            int y = getcury(stdscr);
            mvaddstr(
                y + 1,
                this->x,
                linea.c_str());
        }
        archivo.clear();
        archivo.seekg(0);
    }

    ~Dibujos()
    {
        archivo.close();
    }
};