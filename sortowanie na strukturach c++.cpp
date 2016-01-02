#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

#define N 4

using namespace std;

struct towar
{
	char nazwa[20];
	float cena;
	int sztuki;
};

int main()
{
        towar magazyn[N + 1], pom, min;
		int i, nr, pozycja;
		bool znacznik;

        cout << "Sortowanie babelkowe ze znacznikiem i przez wybor" << endl;
        cout << "------------------------------------------" << endl;
        //generowanie danych posortowanych

        srand(time (NULL));

        for (i = 1; i <= N; i++)
            {
                cout << "Podaj element nr: " << i << endl;
                cout << "Nazwa: ";
                gets(magazyn[i].nazwa);
                cout << "Cena: ";
                cin >> (magazyn[i].cena);
                cout << "Sztuk: ";
                cin >> (magazyn[i].sztuki);
                cout << "------------------------------------------" << endl;
                getchar(); //lub inne narzedzie do czyszczenia strumienia wejsciowego

            }

            cout << "nacisnij klawisz";
            system("PAUSE");

            //sortowanie babelkowe ze znacznikiem
        /*
        nr = 1;
        do {
            znacznik = 0; //false
            for (i = 1; i <= N - nr; i++)
                if ( magazyn[i].cena > magazyn[i + 1].cena )  //zaleznosc liniowa. Przy 10 elem, petla raz przeleci, ale if wykona sie  9 razy.
                    {
                        pom = magazyn[i];
                        magazyn[i] = magazyn[i + 1];
                        magazyn[i + 1] = pom;
                        znacznik = 1; //true //4-ta operacja, szybka, ale zwieksza koszt operacji
                                // jesli nastapi zamiana, wstawiam znacznik
                    }
                nr++;
        } while (znacznik);
        */

        //sortowanie przez wybieranie
    /*
    for (nr = 1; nr <= N; nr++)
    {
        min = magazyn[nr];
        pozycja = nr;

        for (i = nr + 1; i <= N; i++)
            if (magazyn[i].cena < min.cena)
                {
                    min = magazyn[i];
                    pozycja = i;
                }
            magazyn[pozycja] = magazyn[nr];
            magazyn[nr] = min;
    }
    */

    //sortowanie z wartownikiem
        for (nr = 2; nr <= N; nr++)
        {
            magazyn[0] = magazyn[nr];
            i = nr - 1;

                while(magazyn[i].cena > magazyn[0].cena)
                    {
                        magazyn[i+1] = magazyn[i];
                        i--;
                    }

                magazyn[i+1] = magazyn[0];
        }





            cout << "wydruk" << endl;
            cout << "------------------------------------------" << endl;

        for (i = 1; i <= N; i++)
        {
            cout << "Element nr " << i << endl;
            cout << "Nazwa: " << magazyn[i].nazwa << endl;
            cout << "cena: " << magazyn[i].cena << endl;
            cout << " " << "sztuki: " << magazyn[i].sztuki << endl;
            cout << "------------------------------------------" << endl;
        }

}
