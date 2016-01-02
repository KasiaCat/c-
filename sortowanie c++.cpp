#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 160000

using namespace std;

int main()
{
    int t[N + 1], i, nr, indmin, min, temp, znacznik, pozycja;
    cout << "Test przez wybieranie" << endl;
    //generowanie danych posortowanych

    srand(time (NULL));

    for (i = 1; i <= N; i++)
    {
        //cout << "podaj element nr: " << i << " : ";
        //cin >> t[i];
        //t[i] = i;
        //t[i] = - i;
        t[i] = rand()%32000;
        //cout << t[i] << endl;
    }

    cout << "nacisnij klawisz";
    system("PAUSE");

    //algorytm sortowania przez wybieranie
    // w przyszlosci te czesc algorytmu podmieniamy
    /*
    for (nr = 1; nr <= N; nr++)
    {
        min = t[nr];
        indmin = nr;

        for (i = nr + 1; i <= N; i++)
            if (t[i] < min) // ta instrukcja przy posortowanych sie nie wykona, bo nastepna liczba, nie bedzie < od min
                {       // przy odwrotnie posor, ta instrukcja wykona sie za kazdym razem
                    min = t[i];
                    indmin = i;
                }
            t[indmin] = t[nr];
            t[nr] = min;
    }
    */

    //sortowanie babelkowe, deklaruje temp, u gory
    /*
    for (nr = 1; nr < N; nr++)
    {
        for (i = 1; i <= N - nr; i++)
            if (t[i] > t[i + 1])
                {
                    temp = t[i];
                    t[i] = t[i + 1];
                    t[i + 1] = temp;
                }

    }
    */

    //sortowanie babelkowe ze znacznikiem
    /*
    nr = 1;
    do {
        znacznik = 0; //false
        for (i = 1; i <= N - nr; i++)
            if ( t[i] > t[i + 1] )  //zaleznosc liniowa. Przy 10 elem, petla raz przeleci, ale if wykona sie  9 razy.
                {
                    temp = t[i];
                    t[i] = t[i + 1];
                    t[i + 1] = temp;
                    znacznik = 1; //true //4-ta operacja, szybka, ale zwieksza koszt operacji
                                // jesli nastapi zamiana, wstawiam znacznik
                }
            nr++;
    } while (znacznik); //rob tak dlugo, jak nastepuja zamiany
    */

    // ponizej algorytm sortowania z wartownikiem
     for (nr=1; nr<=N; nr++)
     {
         min = t[nr];
         pozycja = nr;
            for (i = nr+1; i < N; i++)

                if (t[i] < min)
                {
                    min = t[i];
                    pozycja = i;
                }
                t[pozycja] = t[nr];
                t[nr] = min;


     }


    cout << "wydruk" << endl;

    for (i = 1; i <= N; i++)
        cout << "Element nr " << i << " : " << t[i] << endl;


    system("PAUSE");


}
