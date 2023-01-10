#include <string>
#include <iostream>
#include <conio.h>


using namespace std;

//1 biale, 2 czarne
int tab[8][8];

//ilość oraz 0/1 czy jest królem
int pB = 12;
int pC = 12;

void start() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && j % 2 == 1 && i < 3 || i % 2 == 1 && j % 2 == 0 && i < 3) {
                tab[i][j] = 2;
            }
            if (i % 2 == 0 && j % 2 == 1 && i > 4 || i % 2 == 1 && j % 2 == 0 && i > 4) {
                tab[i][j] = 1;
            }
        }
    }
}

void print() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
           cout << tab[i][j] << "\t";
        }
        cout << endl;
    }
}

void checkExit() {
    for (int i = 0; i < 12; i++) {
        if (pB == 0) {
            cout << "Wygrały Czarne!" << endl;
        } else if (pC == 0) {
            cout << "Wygrały Białe!" << endl;
        }
    }
}

int main()
{
    setlocale(LC_CTYPE, "Pollish");
    start();
    

    return EXIT_SUCCESS;
}
