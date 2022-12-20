//definiowanie klas w nowych plikach przy większych projektach skraca czas kompilowania, można kompilowac tylko jeden z plikow zamiast całosci

#pragma once


//definuje tylko jezeli nie jest jeszcze zdefiniowane
#ifndef PLANSZA_H
#define PLANSZA_H


//dynamicznie powiekszajace sie tablice, brak im optimalizacji przy deklaracji pamieci ale dla tak prostej gry nie bedzie mialo to wiekszego znaczenia
#include <vector>

//nie chcemy by wielkosc planszy mozna bylo zmieniac
const int BOARD_SIZE = 8;


//klasa pionka,  bedzie wiele pojec ogolnych ulatwiajacych dziedziczenie klasowe
class Piece {
public:
	//ciekawy typ zmiennej ciezki do wytlumaczenia, lista slow z przypisanymi indeksami
	enum Color { WHITE, BLACK };

	//konstruktor
	Piece(Color color);
	//abstrakcyjny destruktor
	virtual ~Piece(){}

	//metody stale
	Color getColor() const;
	char getSymbol() const;
	bool isKing() const;

	//wirtualna metoda o domyslnej wartosci 0
	virtual bool canMove(int fromX, int fromY, int toX, int toY) const = 0;

protected:
	Color mColor;
	bool mIsKing;
};

//nowa klasa "pionek" dziedziczaca po "piece", posiada typ dziedziczenia public bo nie widze potrzeby zmieniania prywatnosci elementow z "Piece"
class Pawn : public Piece {
public:
	Pawn(Color color);

	bool canMove(int fromX, int fromY, int toX, int toY) const override;
};

#endif


