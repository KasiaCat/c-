#include <iostream>
using namespace std;

void ConvertToBinary(int n)
{
    if (n / 2 != 0) {   //8/2    // 4/2 //2/2  //1/2
        ConvertToBinary(n / 2); //8/2 = 4 //4/2 = 2 // 2/2  = 1 // 1/2 = 1  0001
    }
    cout << (n, n % 2);
}

int main() {

    int T, n;
    cin >> T;

    while(T--)
        {
            cin >> n;
            ConvertToBinary(n);
            cout << endl;
        }
return 0;
}
