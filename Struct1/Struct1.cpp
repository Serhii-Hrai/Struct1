#include <iostream>
#include <string>
using namespace std;

struct Player {
    string Name;
    float Energie;
    int Punkte;
};

int main()
{
    Player Spieler1, Spieler2;

    Spieler1.Name = "WeerWulff";
    Spieler1.Energie = 93.5f;
    Spieler1.Punkte = 8200;

    cout << "Wie ist dein Name? "; cin >> Spieler2.Name;
    cout << "Deine Energie (max. 100)";
    cin >> Spieler2.Energie;
    cout << "Wie viele Punkte hast du? ";
    cin >> Spieler2.Punkte;

    cout << "Dein Gegner ist " << Spieler1.Name << "\n";
    cout << "Er hat eine Lebensenergie von " << Spieler1.Energie << "Prozent.\n";
    cout << "Und bereits " << Spieler1.Punkte << " Punkte erreicht.\n";
}