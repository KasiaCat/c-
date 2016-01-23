#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>



void menu();
void wybor();
void wypisz_kolejke();
void wypisanie_kolejki();


#define DB_FILENAME "baza.txt"

using namespace std;

struct plyta {
    string imie;
    string nazwisko;
    string nazwa_plyty;
    int ilosc_utworow_na_plycie;
    int wiek;
    plyta *nastepna;
    plyta * pierwszy;
};

plyta *dodaj_plyte( int ile  )
{
    plyta *elem = NULL, *k = NULL, *pierwszy = NULL;
	int licznik = 0;
	 for (; licznik < ile; licznik++)
    {

        elem = new plyta;
        cout << "------------------" << endl;
        cout <<"Podaj Imie artysty: ";
        cin >> elem->imie;
        cout << "Nazwisko: ";
        cin >> elem->nazwisko;
        cout << "Singiel: " ;
        cin >> elem->nazwa_plyty;
        cout << "Ilosc singli na plycie: ";
        cin >> elem->ilosc_utworow_na_plycie;
        cout <<"Wiek artysty: " << endl;
        cin >> elem->wiek;
        elem->nastepna = NULL;

        if (pierwszy) {
            k->nastepna = elem;
        } else {
            pierwszy = elem;
            k = elem;
        }


    }
    return pierwszy;

}

int wypisanie_kolejki(int w)
{
    plyta *pierwszy = NULL, *elem;
    int znak;

    pierwszy = dodaj_plyte(w);

    if (pierwszy == NULL)
        cout << "brak kolejki" << endl;
    else {
        cout << endl << "Aktualna zawartosc kolejki: " << endl;
            elem = pierwszy;
                    while (elem != NULL) {
                        system ("cls");
                        cout << endl << "---------------------------------------------";
                        cout << endl << "Imie: " << elem ->imie << endl << "Nazwisko: " <<elem->nazwisko;
                        cout << endl << "Nazwa plyty: " << elem->nazwa_plyty;
                        cout << endl << "Wiek artysty: " << elem->wiek;
                        cout << endl << "Ilosc utworow na plycie: " << elem->ilosc_utworow_na_plycie;
                        cout << endl << "---------------------------------------------";
                        elem = elem->nastepna;
                        }
         }
}

void wypisz_kolejke()
{
    int w;
    cout << endl << "Dodaj do bazy nowe plyty w twojej kolekcji." << endl << "Ile plyt chcesz dodac: ";
    cout << endl << "-----------------------------------------------" << endl << " > ";
    cin >> w;
    cout << endl << wypisanie_kolejki(w);
}

void menu()
{
    cout << endl << "Sposrod wybranych opcji, wybierz jedna: " << endl ;
    cout << "1. Wypisanie kolejki " << endl << " > ";
}

void wybor()
{
    char znak;
    do{
        menu();
        znak = getch();
        switch(znak)
        {
            case '1': wypisz_kolejke();
            break;
        }
    }while(true);
}

void start()
{
    system("cls");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
    cout << endl << "Baza plyt wydanych w latach 2000-2015" << endl;

}

int main()
{
    start();
    wybor();

    return 0;
}
