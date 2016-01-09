#include <iostream>
#include <cstdlib>

//wyamagane dla obslugi plikow
#include <stdio.h>

using namespace std;

int main()
{
    FILE * p = 0;
    //p jest lacznikiem do pliku
    //wskaznik na etapie deklaracji zeruje
    unsigned long int licznikznakow = 0; // moge usunac int, tez sie skompiluje

    p = fopen ("kasia.txt", "rt");
    //jesli chce operowac na liczbach, otwieram plik w trybie binarnym "rb"
    //rt  - read w trybie tekstowym
    //p = fopen ("ola.txt", "wt"); // zapis do pliku, nowego
    //p = fopen ("ola.txt", "rt");

    if (p != NULL) // jesli plik nie jest pusty
    {
        int znak; // nie char
        //znak = fgetc(p); // czytam pierwszy znak z pliku

        //czytanie pliku

        while ( ( znak = fgetc(p) ) != EOF ) {// najpierw przypisanie,  Potem czytam znak, dopoki koniec pliku
            cout << (char) znak; //rzutowanie
            // pozycja  - glowica(current pointer ) automatycznie sie przesuwa, przy kazdej operacji odczytu i zapisu.

            if (isupper (znak) )
                licznikznakow++;
            else if (islower (znak) )
                licznikznakow++;
        }



        fclose(p); //zamykam plik po zakonczeniu pracy
        cout << endl << "Liczba znakow w pliku: " << licznikznakow;


        // to ponizej rozwiazanie drozsze, nieprawidlowe
         /*znak = fgetc(p);
        while ( znak != EOF ) {
            cout << (char) znak;
                licznikznakow++;
        } */

        //zapis do pliku
        /*
        for (znak = 'A'; znak <= 'Z'; ++znak) //++znak szybsze niz znak++
            fputc(znak, p); //poloz co znak, do pliku kazdy znak
            //fputc("\n", p); //entery

        fclose(p);
        */


    } else {
        cout << "plik pusty / brak pliku!";
    }

    //fgetc = pobierz znak 'c' z pliku 'f'
    //int znak
    //znak  = fgetc ( p )
    //fseek - przejdz do konkretnego indeksu

    cin.get();
    return EXIT_SUCCESS;
}

