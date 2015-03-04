#include <iostream>
#include "CasePlateau.h"
#include <stdlib.h>

using namespace std;

Case::Case()
{
    free = true;
    broken = false;
}

void Case::setfree(bool libre)
{
    free = libre;
}

void Case::setbroken(bool kc)
{
    broken = kc;
}

bool Case::getfree()
{
    return free;
}

bool Case::getbroken()
{
    return broken;
}

Plateau::Plateau()
{
    dim = 35;

    gameboard = new Case*[dim];

    for (int i = 0; i < dim; i++)
    {
        gameboard[i] = new Case [dim];
        for (int j = 0; j < dim; j++)
            {
                gameboard[i][j] = Case();
            }
    }
    gameboard[(dim -1)/2][(dim -1)/2].setfree(false);
}


Plateau::Plateau(int x)
{
    x = abs(x);
    if (x %2 == 0) x++;
    dim = x;

    gameboard = new Case*[dim];

    for (int i = 0; i < dim; i++)
    {
        gameboard[i] = new Case [dim];
        for (int j = 0; j < dim; j++)
            {
                gameboard[i][j] = Case();
            }
    }
    gameboard[(dim -1)/2][(dim -1)/2].setfree(false);
}


void Plateau::affiche()
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (gameboard[i][j].getbroken() == true)
            {
                cout<<"x";
            }
            if (gameboard[i][j].getfree() == false)
            {
                cout<<"o";
            }
            if (gameboard[i][j].getfree() == true && gameboard[i][j].getbroken() == false)
            {
                cout<<".";
            }
        }
        cout <<endl;
    }
}

int Plateau::getDim()
{
    return dim;
}

void Plateau::setgameboard(int i, int j, bool f, bool b)
{
    gameboard[i][j].setfree(f);
    gameboard[i][j].setbroken(b);
}

Case Plateau::getgameboard(int i, int j)
{
  return gameboard[i][j];
}
