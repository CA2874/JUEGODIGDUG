#pragma once
#include "iostream"
#include "time.h"
using namespace std;
using namespace System;

class EntidadX
{
protected:
	int x;
	int y;
	int dx;
	int dy;

public:

	EntidadX::EntidadX(int px, int py)
	{
		this->x = px;
		this->y = py;
	}

	EntidadX::~EntidadX()
	{
	}

	void EntidadX::borrar()
	{
		Console::SetCursorPosition(x, y); cout << "   ";
		Console::SetCursorPosition(x, y + 1); cout << "      ";
		Console::SetCursorPosition(x, y + 2); cout << "   ";
		Console::SetCursorPosition(x, y + 3); cout << "   ";
	}

	void EntidadX::mover()
	{
	
	}

	void EntidadX::dibujar(short eleg)
	{
		if (eleg == 1)
		{
			Console::SetCursorPosition(x, y);     cout << " oo";
			Console::SetCursorPosition(x, y + 1); cout << "(" << char(219) << char(219) << ")-/";
			Console::SetCursorPosition(x, y + 2); cout << " " << char(192) << char(192);
		}

	}
};

