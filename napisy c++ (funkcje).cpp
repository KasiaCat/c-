#include <iostream>
#include <cstdlib>
#include <cctype>
#include <fstream>

using namespace std;

#define MAX_LEN 128

/*
//wersja bez wskaznika
 int str_len( char s[] )
 {
     int napis, d = 0;

     for (napis = 0; s[napis] != '\0'; napis++)
            d++;

     return napis;
 }
 */

 // wersja bez wskaznika
/*
int lwr_str_cnt( char s[] )
{
    int napis, d = 0;

    for (napis = 0; s[napis] != '\0';  napis++)
    {
        if (s[napis] >= 'a' && s[napis] <= 'z')
                d++;
    }

    return d;
}*/


//Wersja bez wskaznika
/*
int upr_str_cnt( char s[] )
{
    int napis, d = 0;
    for (napis = 0; s[napis] != '\0'; napis++)
    {
        if (s[napis] >= 'A' && s[napis] <= 'Z')
            d++;
    }
    return d;
} */


//WERSJA BEZ WSKAZNIKA
/*
int dgt_str_cnt( char s[] )
{
    int napis, d = 0;
    for (napis = 0; s[napis] != '\0'; napis++)
    {
        if (s[napis] >= '0' && s[napis] <= '9')
            d++;
    }
    return d;

} */

// wersja bez wskaznika
/*
int nalpha_str_cnt( char s[] )
{
  int napis, d = 0;

    for (napis = 0; s[napis] != '\0'; napis++)
    {
        if ( (s[napis] >= '0' && s[napis] <= '9') || (s[napis] >= 'a' && s[napis] <= 'z') || (s[napis] >= 'A' && s[napis] <= 'Z') )
            d++;
    }
    return d;
}
*/

// wersja bez wskaznika
/*
int spaces_str_cnt( char s[] )
{
  int napis, d = 0;

    for (napis = 0; s[napis] != '\0'; napis++)
    {
        if (s[napis] == ' ')
            d++;
    }
    return d;
}
*/

/*
//wersja bez wskaznika
void str_rev( char s[] )
{
    int start, koniec;
    // szukanie konca napisu
    for (koniec = 0; s[koniec] != '\0'; koniec++);

    //zamiana znakow miejscami
    for (start = 0, koniec--; start < koniec; start++, koniec--)
    {
        char znak = s[start];
        s[start] = s[koniec];
        s[koniec] = znak; //babelkowe
    }

} */

/*
int chr_str_cnt( char c, char s[] ) //liczba wystapien znaku c w napisie
{
  int napis, d = 0;

    for (napis = 0; s[napis] != '\0'; napis++)
    {
        if (s[napis] == c )
            d++;
    }

    return d;
}
*/

//Funkcja z zamiana malych liter na duze i duzych na male
//wersja bez wskaznika
/*
int liczeZamiane( char s[] )
{
    int licznik;
    int zamiana = 0;

    for (licznik = 0; s[licznik] != '\0'; licznik++)
    {
        if  ( ( s[licznik] >= 'a' ) && ( s[licznik] <= 'z') )
            {
                s[licznik] = s[licznik - 32];
                //s[licznik] = toupper( s[licznik] );
                zamiana++;
            }

        else if ( ( s[licznik] >= 'A' ) && ( s[licznik] <= 'Z') )
            {
                // s[licznik] = s[licznik - 32];
                s[licznik] = tolower( s[licznik] );
                zamiana++;
            }
    }
    return zamiana;

}
*/


//dlugosc napisu
//wersja ze wskaznikiem
int str_len( char * s)
 {
    int licznik = 0;

    while (*s != '\0') {
        licznik++;
        s++;
    }
    return licznik;
 }

 //wersja ze wskaznikiem
 int lwr_str_cnt( char *s )
{
    int licznik = 0;

    do
    {
        if ( *s >= 'a' && *s <= 'z')
                licznik++;
                s++;

    } while (*s != '\0');

    return licznik;
}



//wersja ze wskaznikiem

int upr_str_cnt( char * s )
{
    int licznik = 0;
    do
    {
        if ( *s >= 'A' && *s <= 'Z')
            licznik++;
            s++;

    } while (*s != '\0');

    return licznik;
}

int dgt_str_cnt( char *s )
{
    int licznik = 0;
    do
    {
        if ( *s >= '0' && *s <= '9')
            licznik++;
            s++;

    } while (*s != '\0');

    return licznik;
}

int nalpha_str_cnt( char *s )
{
    int licznik = 0;
    do
    {
        if ( ( *s >= 'A' && *s <= 'Z') ||  ( *s >= 'a' && *s <= 'z') ||  ( *s >= '0' && *s <= '9') )
            licznik++;
            s++;

    } while (*s != '\0');

    return licznik;
}

int spaces_str_cnt( char *s )
{
    int licznik = 0;
    do
    {
        if ( *s == ' ')
            licznik++;
            s++;

    } while (*s != '\0');

    return licznik;
}

int liczeZamiane( char *s )
{
    int zamiana = 0;
    int licznik = 0;

    do
    {
        if ( *s >= 'A' && *s <= 'Z')
        {
            *s -= 32;
            zamiana++;
            s++;
        }

        else if ( *s >= 'a' && *s <= 'z')
        {
            *s -= 32;
            zamiana++;
            s++;
        }
        else if ( ( *s >= '0' && *s <= '9') || ( *s == ' ' ) )
        {
            s++;
        }

    } while (*s != '\0');

    return zamiana;
}

//wersja ze wskaznikiem
 //liczba wystapien znaku c w napisie

int chr_str_cnt( char c, char *s )
{
    int ile_razy = 0;
    do
    {
        if (*s == c)
            ile_razy++;
            s++;
    } while (*s != '\0');
    return ile_razy;
}


char chr_str_rpos( char c, char s[] ) //Pierwsze wystapienie znaku c, liczac od konca
{
    int napis, d = 0;

    for (napis = 0; s[napis] != '\0'; napis++)
    {
        if (s[napis] == c )
            return napis;
    }
    return s[napis];
}


//WERSJA ZE WSKAZNIKIEM

char str_rev( char * s )
{
    char *start, *koniec;
    // szukanie konca napisu
    for (koniec = s; *koniec; koniec++);

    //zamiana znakow miejscami
    for (start = s, koniec--; start < koniec; start++, koniec--)
    {
        char znak = *start;
        *start = *koniec;
        *koniec = znak; //babelkowe
    }

    return *s;

}

char ostatni_znak (char znak, char * s)
{
    char *begin, *end;

    //szuakam konca napisu
    for (end = s; *end; end++);
        for (begin = s, end--; begin = end; end--)
        {
            if (*s == znak)
                return znak;
        }
        return *s;
}


int main()
{
  char line[ MAX_LEN ];
  char c;
  int pos;

    cout << "\n\nWpisz linie tekstu: ";
    cin.getline( line, MAX_LEN );

    cout << "\nLiczba znakow        : " << str_len( line );
    cout << "\nLiczba malych liter  : " << lwr_str_cnt( line );
    cout << "\nLiczba duzych liter  : " << upr_str_cnt( line );
    cout << "\nLiczba cyfr          : " << dgt_str_cnt( line );
    cout << "\nLiczba liter i cyfr : " << nalpha_str_cnt( line );
    cout << "\nLiczba spacji : " << spaces_str_cnt( line );


    cout << endl << "Napis oryginalny : " << line << endl;
    str_rev( line );
    cout << "Napis odwrocony  : " << line << endl;


    cout << "\n\nPodaj pojedynczy znak: ";
    cin.get( c );
    cout << "\nOstatni znak: " << ostatni_znak(c, line);

    cout << "\nLiczba wystapien znaku  " << c << " : " << chr_str_cnt( c, line );

        if( ( pos = chr_str_rpos( c, line ) ) != -1 )
            cout << "\nPierwsze wystapienie znaku " << c << " od konca : " << pos + 1;
        else
            cout << "\nZnak " << c << " nie zostal znaleziony";

    cout << "\nIlosc zamian w napisie(malych liter na duze oraz duzych na male): " << endl;
    cout << " > " << liczeZamiane( line );



  cin.ignore();
  cin.get();
  return EXIT_SUCCESS;
}
