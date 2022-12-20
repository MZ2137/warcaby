//odwolanie do pliku naglowkowego klasy, deklaracji klasowych
#include "plansza.h"
//podstawowe funkcje matematyczne
#include <cmath>

//konstruktor pionka
Piece::Piece(Color color) : mColor(color), mIsKing(false) {}


Piece::Color Piece::getColor() const {
	return mColor;
}

char Piece::getSymbol() const {
	//operacja logiczna if ukryta w przypisaniu wartosci
	return mColor == WHITE ? 'O' : 'X';
}

bool Piece::isKing() const {
	return mIsKing;
}


Pawn::Pawn(Color color) : Piece(color) {}

//na pierwszy rzut oka skomplikowany ale dosc prosty system sprawdzania czy mozna wykonac ruch
bool Pawn::canMove(int fromX, int fromY, int toX, int toY) const {
	int dx = toX - fromX;
	int dy = toY - fromY;
	if (mColor == WHITE) {
		//abs = wartosc absolutna z biblioteki <cmath>
		return (dy == 1 && std::abs(dx) == 1 || (dy == 1 && dx == 0));
	}
	else {
		return (dy == -1 && std::abs(dx) == -1 || (dy == 1 && dx == 0));
	} 
}

//klasa planszy
class Board {


};