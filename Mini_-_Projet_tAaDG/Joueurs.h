#include "CasePlateau.h"
#ifndef JOUEURS_H_INCLUDED
#define JOUEURS_H_INCLUDED
using namespace std;

class Joueur
{
protected:
    string pseudo;
public:
   // void Joueur();
    void saisir(int *ligne, int *colonne);  //x,y
    void choisirCase();
    void Jouer();
    virtual bool incorrect(int ligne, int colonne, Plateau *plateau);  //x,y
    virtual modifierCase();
};

class Ange : public Joueur
{
protected:
    int ligne;
    int colonne;
public:
   //void modifierCase();
   //void incorrect();
   //void Ange();
};

class Demon : public Joueur
{
public:
//    modifierCase();
  //  incorrect();
    //Demon();
};

#endif // JOUEURS_H_INCLUDED
