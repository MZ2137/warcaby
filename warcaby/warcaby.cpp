#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

enum Color {
	WHITE,
	BLACK,
	NONE
};
enum Type {
	PAWN,
	QUEEN
};
struct Piece {
	Type type;
	Color color;
};

int main()
{
    setlocale(LC_CTYPE, "Polish");
    


    return EXIT_SUCCESS;
}
