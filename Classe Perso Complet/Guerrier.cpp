#include "Guerrier.h"

Guerrier::Guerrier()
{
    setName("Default");
    setHealth(100);
    setForce(50);
    setDefense(10);
    setPnj(true);
    setRage(100);
}

Guerrier::Guerrier(string n, int h, int f, int d, bool p, int r)
{
    setName(n);
    setHealth(h);
    setForce(f);
    setDefense(d);
    setPnj(p);
    setRage(r);
}

int Guerrier::getRage() const
{
	return rage;
}

void Guerrier::setRage(int r)
{
    rage = r;
}

void Guerrier::berserk()
{
    if (getRage() - 30 < 0) {
        cout << "Berserk impossible" << endl;
    }
    else {
        cout << "BERSERK!" << endl;
        setRage(getRage()-30);
        int bonus = getHealth() * 0.25f;
        setHealth(getHealth() - bonus);
        setForce(getForce() + bonus);
    }
}

void Guerrier::test()
{
    cout << "Guerrier" << endl;
}

void Guerrier::showInfo(ostream& os) const
{
    os << "--- " << getName() << " --- Guerrier" << endl;
    os << "Vie : " << getHealth() << endl;
    os << "Force : " << getForce() << endl;
    os << "Defense : " << getDefense() << endl;
    os << (getPnj() ? "non joueur" : "joueur") << endl;
    os << "Rage : " << getRage() << endl;
}

ostream& operator<<(ostream& os, Guerrier const& p)
{
    p.showInfo(os);
    return os;
}
