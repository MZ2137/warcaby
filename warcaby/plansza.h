﻿//definiowanie klas w nowych plikach przy większych projektach skraca czas kompilowania, można kompilowac tylko jeden z plikow zamiast całosci

#pragma once


//definuje tylko jezeli nie jest jeszcze zdefiniowane
#ifndef PLANSZA_H
#define PLANSZA_H


//dynamicznie powiekszajace sie tablice, brak im optimalizacji przy deklaracji pamieci ale dla tak prostej gry nie bedzie mialo to wiekszego znaczenia
#include <vector>

//nie chcemy by wielkosc planszy mozna bylo zmieniac
const int BOARD_SIZE = 8;


//klasa pionka
class Piece {
public:
	//ciekawy typ zmiennej ciezki do wytlumaczenia, lista slow z przypisanymi indeksami
	enum Color { WHITE, BLACK };

	//konstruktor
	Piece(Color color);
	//abstrakcyjny destruktor
	virtual ~Piece(){}


	Color getColor() const;
	char getSymbol() const;
	bool isKing() const;

};

#endif


