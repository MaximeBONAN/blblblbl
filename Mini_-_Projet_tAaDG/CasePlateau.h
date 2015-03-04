#ifndef CASEPLATEAU_H_INCLUDED
#define CASEPLATEAU_H_INCLUDED

class Case
{
private:
    bool free;
    bool broken;
public:
    Case();
    void setfree(bool libre);
    void setbroken(bool kc);
    bool getfree();
    bool getbroken();
};

#endif // CASEPLATEAU_H_INCLUDED

class Plateau
{
protected:
    int dim;
    Case **gameboard;
public:
    int getDim();
    void setDim(int TheDim);
    void setgameboard(int i, int j, bool f, bool b);
    Case getgameboard(int i, int j);
    void affiche();
    Plateau();
    Plateau(int x);

};



