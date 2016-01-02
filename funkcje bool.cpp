#include <iostream>
#include <cstdlib>
// #include <cctype> //biblioteki dla funkcji lowercase i uppercase
// #include <ctype.h>
using namespace std;

bool jestDuzaLitera (char z) //funkcja: isupper
{
    //jesli z jest duza litera
    return (z >= 'A' && z <= 'Z');
}

bool jestMalaLitera (char z) //funkcja islower
{
    //jesli z jest duza litera
    return (z >= 'a' && z <= 'z'); //tak zapisujemy zamiast if-ow
}

bool jestLitera (char z) //funkcja isalpha
{
    return ( jestDuzaLitera(z) || jestMalaLitera(z) );
}

bool tylkoLiteryWNapisie( char napis[] ) //funckja kosz, wylapie smieci
{
    for (int i = 0; napis[i] != '\0'; ++i)
        if ( !( jestDuzaLitera(napis [i] )  || jestMalaLitera(napis [i] ) )  )
            return false;

    return true;
}

int main()
{
    const int N = 80;
    char imie [N];

    cin.getline(imie, N - 1); //czyta cala linie (nie do spacji)
                        //N - jako streamsize (musi byc rozmiar), mowimy ile co najwyzej ma wczytac
                        // wpisujac streamsieze - N, nie przepelniam bufora

    if (tylkoLiteryWNapisie( imie ))
        cout << endl << "Poprawne imie";
    else
        cout << endl << "Nie poprawne imie";

        //graficzna wizualizacja ASCII, sprawdzamy czy cos jest duza litera
        //uzywam ASCII -> w ascii A duze, ma wartosc 65

        cin.ignore();
        cin.get();
        return EXIT_SUCCESS;
}
