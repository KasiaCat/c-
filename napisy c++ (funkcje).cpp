#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX_LEN 128

 int str_len( char s[] )
 {
     int napis, d = 0;

     for (napis = 0; s[napis] != '\0'; napis++)
            d++;

     return napis;
 }

 //wersja ze wskaznikiem
/*
 int str_len( char * s )
 {
     int napis, d = 0;

     for (napis = 0; s[napis] != '\0'; napis++)
            d++;

     return napis;
 }
 */

int lwr_str_cnt( char s[] )
{
    int napis, d = 0;

    for (napis = 0; s[napis] != '\0';  napis++)
    {
        if (s[napis] >= 'a' && s[napis] <= 'z')
                d++;
    }

    return d;
}
//wersja ze wskaznikiem
/*
int upr_str_cnt( char * s )
{
    int napis, d = 0;
    for (napis = 0; s[napis] != '\0'; napis++)
    {
        if (s[napis] >= 'A' && s[napis] <= 'Z')
            d++;
    }
    return d;
}
*/


int upr_str_cnt( char s[] )
{
    int napis, d = 0;
    for (napis = 0; s[napis] != '\0'; napis++)
    {
        if (s[napis] >= 'A' && s[napis] <= 'Z')
            d++;
    }
    return d;
}


int dgt_str_cnt( char s[] )
{
    int napis, d = 0;
    for (napis = 0; s[napis] != '\0'; napis++)
    {
        if (s[napis] >= '0' && s[napis] <= '9')
            d++;
    }
    return d;

}

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

int chr_str_rpos( char c, char s[] ) //Pierwsze wystapienie znaku c, liczac od konca
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

/*
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

}
*/

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

    cout << "\nLiczba wystapien znaku  " << c << " : " << chr_str_cnt( c, line );

        if( ( pos = chr_str_rpos( c, line ) ) != -1 )
            cout << "\nPierwsze wystapienie znaku " << c << " od konca : " << pos + 1;
        else
            cout << "\nZnak " << c << " nie zostal znaleziony";


  cin.ignore();
  cin.get();
  return EXIT_SUCCESS;
}
