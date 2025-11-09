#pragma once
#include "Entidad.h"

class Pocas : public Entidad
{
public:
	Pocas::Pocas(int px, int py) :Entidad(px, py)
	{

	}

	Pocas::~Pocas()
	{
	}

	void Pocas::mover()
	{
		if (x + dx > 35 || x < 12)
		{
			dx = dx * -1;
		}
		x = x + dx;


	}

	void Pocas::mover2()
	{
		if (y + dy > 15 || y < 7)
		{
			dy = dy * -1;
		}
		y = y + dy;
	}

};