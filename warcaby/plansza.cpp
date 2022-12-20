#include "plansza.h"

const int BOARD_SIZE = 8;

board::board() {
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			pieces_[i][j] = { NONE, NONE };
		}
	}
}

board::~board() {

}

