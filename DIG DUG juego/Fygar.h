#pragma once
#include "iostream"
using namespace std;
using namespace System;

class Fygar
{
private:
    int x;
    int y;
    int* xx = new int;
    int* yy = new int;
    int filas;
    int columnas;
    int dx;
    int dy;
    char** figura;

    void liberarMemoriaMatriz();

public:
    Fygar(int px, int py);
    ~Fygar();

    void DibujarFygar();
    void MoverFygar();
    void BorrarFygar();
    void Ataque();
    int Retorno();
    /* void dibuja_escenario();*/
};

Fygar::Fygar(int px, int py)
{
    x = px;
    y = py;
    //dx = 0.1 + (float)rand() / RAND_MAX;
    //dy = 0.1 + (float)rand() / RAND_MAX;
    dx = -1;
    dy = -1;
}

Fygar::~Fygar()
{
    liberarMemoriaMatriz();
}

void Fygar::liberarMemoriaMatriz()
{
    //liberar memoria
    for (int indice = 0; indice < filas; indice++)
        delete[] figura[indice];
    delete[] figura;
}

void Fygar::DibujarFygar()
{
    Console::ForegroundColor = ConsoleColor::Green;
    Console::SetCursorPosition(x + 1, y); cout << "^";
    Console::SetCursorPosition(x + 2, y); cout << "^";
    Console::SetCursorPosition(x, y + 1); cout << (char)254;
    Console::SetCursorPosition(x + 1, y + 1); cout << (char)219;
    Console::SetCursorPosition(x + 2, y + 1); cout << (char)219;
    Console::SetCursorPosition(x + 3, y + 1); cout << (char)254;
    //Console::SetCursorPosition(x + 4, y + 1); cout << "~~~";
    Console::SetCursorPosition(x + 1, y + 2); cout << "L";
    Console::SetCursorPosition(x + 2, y + 2); cout << "L";
}

void Fygar::MoverFygar()
{
    if (x == 0 && y == 0) { dx = 1; dy = 0; }
    if (x == 75 && y == 0) { dx = 0; dy = 1; }
    if (x == 75 && y == 20) { dx = -1; dy = 0; }
    if (x == 0 && y == 20) { dx = 0; dy = -1; }
    x += dx;
    y += dy;
    *xx = x;
    *yy = y;
}

void Fygar::BorrarFygar()
{
    Console::SetCursorPosition(x + 1, y); cout << " ";
    Console::SetCursorPosition(x + 2, y); cout << " ";
    Console::SetCursorPosition(x, y + 1); cout << " ";
    Console::SetCursorPosition(x + 1, y + 1); cout << " ";
    Console::SetCursorPosition(x + 2, y + 1); cout << " ";
    Console::SetCursorPosition(x + 3, y + 1); cout << " ";
    Console::SetCursorPosition(x + 4, y + 1); cout << "   ";
    Console::SetCursorPosition(x + 1, y + 2); cout << " ";
    Console::SetCursorPosition(x + 2, y + 2); cout << " ";
}
int Retorno(int* xx, int x)
{
    *xx = x;
    return *xx;
}
void Fygar::Ataque()
{
    if (x + 4 == 'O' || x + 4 == 'I' || x + 4 == 'N' || x + 5 == 'O' || x + 5 == 'I' || x + 5 == 'N' || x + 6 == 'O' || x + 6 == 'I' || x + 6 == 'N')
    {
        Console::ForegroundColor = ConsoleColor::Red;
        Console::SetCursorPosition(x + 4, y + 1); cout << "~~~";
    }
   
}