#pragma once

#include "conio.h"
#include "Pocas.h"
#include "Excavador.h"
#include "Fygar.h"


#define ARRIBA 72
#define IZQ 75
#define DER 77
#define ABAJO 80

class Juego
{
private:
	Excavador* objexcabor;
	short meta;
	int sx, sy;
	int fx, fy;
	Pocas* objPocas1;
	Pocas* objPocas2;
	Fygar* ObjetoFygar;

public:
	Juego::Juego()
	{	
		

		int t1;
		srand(time(NULL));
		t1 = 0.09 + (rand() % 10) / 10.0;

	
		objexcabor = new Excavador(t1, 0);
		objPocas1 = new Pocas(12, 20);
		objPocas2 = new Pocas(34, 7);
		ObjetoFygar = new Fygar(3, 3);

		meta = 60;
	}

	Juego::~Juego()
	{

		delete objexcabor;


	}

	void Juego::inicia_juego()
	{
		bool hay_ganador = false;
		short excavador = 1;
		short pocas = 1;
		

		while (true)
		{
			objPocas1->borrar();
			objPocas1->mover();
			objPocas1->dibujar(pocas);

			objPocas2->borrar();
			objPocas2->mover2();
			objPocas2->dibujar(pocas);

			_sleep(160);

			ObjetoFygar->BorrarFygar();
			ObjetoFygar->MoverFygar();
			ObjetoFygar->DibujarFygar();
			
			

			_sleep(100);

			objexcabor->borrar();

			sx = objexcabor->get_x();
			sy = objexcabor->get_y();

			

			if (kbhit())
			{
				char tecla = getch();

				if (tecla == IZQ) {
					sx = sx - 1;
				}
				if (tecla == DER) {
					sx = sx + 1;
				}
				if (tecla == ARRIBA) {
					sy = sy - 1;
				}
				if (tecla == ABAJO) {
					sy = sy + 1;
				}
				objexcabor->set_x(sx);
				objexcabor->set_y(sy);

				//cout << sx << endl;
				//cout << sy << endl;

			}
			objexcabor->dibujar(1);
			_sleep(20);

		}


		system("pause>0");

	}

};