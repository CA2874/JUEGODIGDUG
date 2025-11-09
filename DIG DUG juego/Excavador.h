#pragma once
#include "Entidad2.h"

class Excavador : public EntidadX
{
public:
	Excavador::Excavador(double px, int py) :EntidadX(px, py)
	{

	}

	Excavador::~Excavador()
	{
	}

	int Excavador::get_x()
	{
		return this->x;
	}

	void Excavador::set_x(int a1)
	{
		this->x = a1;
	}

	int Excavador::get_y()
	{
		return this->y;
	}

	void Excavador::set_y(int b1)
	{
		this->y = b1;
	}
};
