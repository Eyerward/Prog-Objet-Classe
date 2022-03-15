#pragma once
#include "Personnage.h"

class Guerrier : public Personnage
{
private:
	int rage;

public:
	Guerrier();
	Guerrier(string n, int h, int f, int d, bool p, int r);

	int getRage() const;
	void setRage(int r);

	void berserk();

	friend ostream& operator<<(ostream& os, Guerrier const& p);
	void test();

	void showInfo(ostream& os) const;
};

