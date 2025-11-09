#pragma once
#pragma once
#include "iostream"
#include "time.h"

using namespace std;
using namespace System;

class Entidad
{
protected:
	double x;
	int y;
	double dx;
	int dy;


public:
	Entidad::Entidad(double px, int py)
	{
		this->x = px;
		this->y = py;
		dx = 1;
		dy = 1;

	}

	Entidad::~Entidad()
	{
	}

	void Entidad::borrar()
	{
		Console::SetCursorPosition(x, y); cout << "  ";
		Console::SetCursorPosition(x, y + 1); cout << "   ";
		Console::SetCursorPosition(x, y + 2); cout << "   ";
		Console::SetCursorPosition(x, y + 3); cout << "   ";
	}


	void Entidad::dibujar(short elegir)
	{
		//Pocas
		if (elegir == 1)
		{
			Console::SetCursorPosition(x, y); cout << (char)126;
			Console::SetCursorPosition(x, y + 1); cout << (char)170 << (char)170;
			Console::SetCursorPosition(x, y + 2); cout << (char)219 << (char)219;
			Console::SetCursorPosition(x, y + 3); cout << (char)192 << (char)192;
		}
	}



};