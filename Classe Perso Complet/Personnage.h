#pragma once
#include <iostream>
#include <Windows.h> //pour mettre les accents

using namespace std;

class Personnage
{
protected:
    string name;
    int health;
    int force;
    int defense;
    bool pnj;

public:
    //Constructeurs
    Personnage();
    Personnage(string n, int h, int f, int d, bool p);

    //Getters Setters
    string getName() const;
    void setName(string n);

    int getHealth() const;
    void setHealth(int h);

    int getForce() const;
    void setForce(int f);

    int getDefense() const;
    void setDefense(int d);

    bool getPnj() const;
    void setPnj(bool p);

    virtual void test();


    //Methodes gameplay
    void attack(Personnage& enemy);

    bool operator>(Personnage& target);
    bool operator<(Personnage& target);

    friend ostream& operator<<(ostream& os, Personnage const& p);
    virtual void showInfo(ostream& os) const;
};
