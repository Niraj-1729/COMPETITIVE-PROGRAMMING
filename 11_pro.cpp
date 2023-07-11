#include <iostream>
using namespace std;

int main()
{

    int T, X, Y;
    while (T--)
    {
        cin >> X, Y;
        if (X + Y > 6)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}