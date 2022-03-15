#pragma once
#include "Personnage.h"
class Voleur : public Personnage 
{
public :
	Voleur();
	Voleur(string n, int h, int f, int d, bool p);
	void attack(Personnage& enemy);

	friend ostream& operator<<(ostream& os, Voleur const& p);
	void test();

	void showInfo(ostream& os) const;
};

