#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int c = 0;
        string str;
        cin >> str;

        int one = count(str.begin(), str.end(), '1');
        int zero = count(str.begin(), str.end(), '0');
        // cout << one << " " << zero << endl;
        if (one >= 2)
        {
            c++;
        }
         
    cout<<c;
    }
    return 0;
}