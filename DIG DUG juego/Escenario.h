#pragma once


using namespace std;
using namespace System;

class Escenario
{
private:
	int st;



public:
	Escenario::Escenario()
	{
		this->st = 0;

	}

	Escenario::~Escenario()
	{




	}


	void Escenario::dibuja_escenario()
	{
		//Console::ForegroundColor = ConsoleColor::DarkCyan;
		system("Color 0E");

		for (int i = 0; i < 80; i++)
		{
			for (int k = 0; k < 60; k++)
			{
				cout << char(219);
				//Console::ForegroundColor = ConsoleColor::DarkCyan;
			}
			cout << endl;
		}
		/*for (int i = 0; i < 76; i++) {
			for (int k = 0; k < 60; k++)
				{
					cout << char(219);
					Console::ForegroundColor = ConsoleColor::White;
				}
				cout << endl;
		}*/

	}
};
