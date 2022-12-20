#pragma once

class board
{
	enum Color {
		WHITE,
		BLACK,
		NONE
	};
	enum Type {
		PAWN,
		QUEEN,
		NONE
	};
	struct Piece {
		Type type;
		Color color;
	};


	Piece pieces_[BOARD_SIZE][BOARD_SIZE];

public:
	board();
	~board();

};

