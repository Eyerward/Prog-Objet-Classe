#include "Voleur.h"

Voleur::Voleur()
{

}

Voleur::Voleur(string n, int h, int f, int d, bool p)
{
    setName(n);
    setHealth(h);
    setForce(f);
    setDefense(d);
    setPnj(p);
}

void Voleur::attack(Personnage& enemy)
{
	cout << getName() << "Attaque 2 fois " << enemy.getName() << " ! " << endl;
    Personnage::attack(enemy);
    Personnage::attack(enemy);
}

void Voleur::test()
{
    cout << "Voleur" << endl;
}

void Voleur::showInfo(ostream& os) const
{
    os << "--- " << getName() << " --- Voleur" << endl;
    os << "Vie : " << getHealth() << endl;
    os << "Force : " << getForce() << endl;
    os << "Defense : " << getDefense() << endl;
    os << (getPnj() ? "non joueur" : "joueur") << endl << endl;
}

ostream& operator<<(ostream& os, Voleur const& p)
{
    p.showInfo(os);
    return os;
}
