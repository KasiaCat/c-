#include <stdio.h>
#include <iostream>

using namespace std;

struct dane
{
    char naz[50];
    int cena;
    dane *kolejny;
    dane *poprzedni;
};

dane *stworz_liste (int n=1)
{
    dane *b=NULL,*k=NULL,*p=NULL;

    //int i=0;

    for (int i = 0; i<n; i++) {

        b = new dane;
        cout<<"podaj nazwe"<<endl;
        cin>>b->naz;
        cout<<"podaj cene"<<endl;
        cin>>b->cena;
        b->kolejny=NULL;

        if (p) {
            k->kolejny=b;
        } else {
            p = b;
            k = b;
        }
    }
    return p; //zwracam wynik funkcji
}

int main()
{
    dane *p=NULL,*k,*e,*a,*ostatni;
    int i,n;
    /*
    //zakladanie kolejki z 1 elementem

    p=new dane; //pierwszy

    cout<<"podaj nazwe"<<endl;
    cin>>p->naz;    //lub:  cin>>(*p).naz;
    cout<<"podaj cene"<<endl;
    cin>>p->cena;   //lub:  cin>>(*p).cena;
    p->kolejny=NULL;
    p->poprzedni=NULL;

    a=p; //aktualny jest pierwszym
    k=p; //kolejny = pierwszy, poniewaz nie mamy jeszcze kolejnego, ani poprzedniego elementu

    //koniec zakladania

    cout<<endl<<"ile elementow dopisac? ";
    cin>>n;

    //dopisanie do kolejki n elementow
    for (i=1;i<=n;i++)
    {
        e= new dane;
        cout<<"podaj nazwe"<<endl;
        cin>>e->naz;
        cout<<"podaj cene"<<endl;
        cin>>e->cena;
        e->kolejny=NULL;
        e->poprzedni=k;
        k->kolejny=e;
        k=e;
    }
    ostatni=k;
    //koniec dopisywania
    */

    /*
    wersja dopisywania "2 w 1"

    e= new dane;
    cout<<"podaj nazwe"<<endl;
    cin>>e->naz;
    cout<<"podaj cene"<<endl;
    cin>>e->cena;
    e->kolejny=NULL;
    if p!=NULL
        k->kolejny=e;
    else
        p=e;
        k=e;

     //kasowanie pierwszego elementu

    if (p==NULL)
        cout<<"brak kolejki"<<endl;
        else {
            e=p;

        cout<<"kasuje 1-szy element: "<<e->naz<<"  "<<e->cena<<endl;

        p=e->kolejny;     //p=p->kolejny;
        delete e;
    }
//koniec kasowania
*/

//wypisanie zawartosci kolejki.

    int w = 3;
    p = stworz_liste(w); //wywoluje funkcje

    if (p==NULL)
        cout<<"brak kolejki"<<endl;
    else {
    cout<<endl<<"aktualna zawartosc kolejki:"<<endl;
    e=p;
        while (e!=NULL) {
                cout<<e->naz<<"    "<<e->cena<<endl;
                e=e->kolejny;
                        }
         }
/*
    if (p==NULL)
        cout<<"brak kolejki"<<endl;

    else {
        cout<<endl<<"aktualna zawartosc kolejki:"<<endl;
        e=ostatni;

        while (e!=NULL)
            {
                cout<<e->naz<<"    "<<e->cena<<endl;
                e=e->poprzedni;
            }

    }

    cout << "Test pozycji wskaŸników (kolejny, ostatni):" << endl;
    cout << k->naz << endl

         << ostatni->naz << endl;
    */
}

