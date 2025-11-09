#include "pch.h"
#include "Juego.h"
#include "Fygar.h"
#include "Escenario.h"



using namespace System;

int main()
{
    Console::SetWindowSize(80, 60);
    Console::CursorVisible = false;

    Fygar* ObjetoFygar;
    Escenario* ObjetoPartida;


    Juego* objJuego = new Juego();
    Juego* objPocas = new Juego();
    Juego* objFygar = new Juego();
    ObjetoFygar = new Fygar(5, 5);
    ObjetoPartida = new Escenario();

    
    ObjetoPartida->dibuja_escenario();
    objJuego->inicia_juego();
    objPocas->inicia_juego();
    objFygar->inicia_juego();
   
    while (1)
    {
        //instancia Objeto Fygar
        ObjetoFygar->BorrarFygar();
        ObjetoFygar->MoverFygar();
        ObjetoFygar->DibujarFygar();
      
        _sleep(100);

      
    }
    
    system("pause>0");
    return 0;
}
