#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
using namespace std;

struct dane
{
        string name;
        string phonenumber;
};

int main() {
    int N, i, d;
    cout << "ile testow > ";
    cin >> N;
    dane book[N];

    for (i = 0; i < N; i++)
        {
            cout << ": imie >";
            cin >> (book[i].name);
            cout << ": telefon >";
            cin >> (book[i].phonenumber);
        }

    for (d = 0; d < N; d++)
            {
                string query;
                cout << "zapytanie > ";
                cin >> query;

                    if (query == book[d].name)

                            cout << book[d].name << "=" << book[d].phonenumber << endl;

                         else
                            cout << "Not found" << endl;

            }
return 0;
}


