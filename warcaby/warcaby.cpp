#include <string>
#include <iostream>
#include <conio.h>


using namespace std;

//1 biale, 2 czarne
int tab[8][8];

//czy pionek w danem miejscu jest królem
int pB[12][8][8];
int pC[12][8][8];

int t;

void start() {
    for (int i = 0; i < 8; i++) {
        t = 0;
        if (t == 12) {
            t = 0;
        }
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && j % 2 == 1 && i < 3 || i % 2 == 1 && j % 2 == 0 && i < 3) {
                pC[t][i][j] = 0;
                tab[i][j] = 2;
                t++;
            }
            if (i % 2 == 0 && j % 2 == 1 && i > 4 || i % 2 == 1 && j % 2 == 0 && i > 4) {
                pB[t][i][j] = 0;
                tab[i][j] = 1;
                t++;
            }
        }
    }
}

void print() {
    for (int i = 0; i < 8; i++) {
        t = 0;
        if (t == 12) {
            t = 0;
        }
        for (int j = 0; j < 8; j++) {
            if (pC[t][i][j] == 1) {
                //król czarny to 8
                cout << 8 << "\t";
            }
            else if (pB[t][i][j] == 1) {
                //król biały to 9
                cout << 9 << "\t";
            }
            else {
                cout << tab[i][j] << "\t";
            }
            
        }
        cout << endl;
    }
}

void checkWin() {
    for (int i = 0; i < 12; i++) {
        if (pB[i] == 0) {
            cout << "Wygrały Czarne!" << endl;
        } else if (pC[i] == 0) {
            cout << "Wygrały Białe!" << endl;
        }
    }
}

void checlKing() {

}

int main()
{
    setlocale(LC_CTYPE, "Pollish");
    start();
    print();
    checkWin();



    return EXIT_SUCCESS;
}
