#include <cstdlib>
#include <iostream>
using namespace std;

int Max_wspolny_Dzielnik(int a,int b)
{
    int x = a;
    int y = b;
    while ( (x != 0) && (y != 0) )
        {
            if (x > y)
                x = x - y;
            else
                y = y - x;
        }
    return max(y,x);
}
int main() {
    int a,b;
    cout << "Podaj a > ";
    cin >> a;
    cout << endl <<  "Podaj b > ";
    cin >> b;

    int max_dzielnik = Max_wspolny_Dzielnik(a,b);
    cout << endl << "Najwiekszy wspolny dzielnik wynosi: " << max_dzielnik;
    return EXIT_SUCCESS;
}
