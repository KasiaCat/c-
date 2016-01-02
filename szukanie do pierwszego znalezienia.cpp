#include <cstdlib>
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <conio.h>
#define N 5000

using namespace std;
main()
{
    int t[N], szukana, pozycja;
    int i = 0;
    int znacznik = false;

    //cout<<"Program testuje sortowanie wstawianie z wartownikiem"<<endl;
    srand(time(NULL));
    for (i=1; i<=N; i++)
      {
        t[i]=i; //generuje ciag juz posortowany
      }

    cout << "Wpisz szukana: ";
    cin >> szukana;
    cout<<endl<<"NACISNIJ ENTER BY ZACZAC"<<endl;
    getchar();

      do {
            if (szukana == t[i])
                znacznik = true;
                pozycja = t[N];
                cout<<"Element nr "<<pozycja<<" : "<<szukana<<endl;
        } while (i < N && znacznik == false);

        /*
        if (znacznik)
            cout << "znalazlem";
        else
            cout << "nie znalazlem";
            */
}

