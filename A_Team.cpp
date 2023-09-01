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
        string str;
        cin >> str;

        int one = count(str.begin(), str.end(), '1');
        int zero = count(str.begin(), str.end(), '0');
        cout << one << " " << zero << endl;
        for (int i = 0; i < t; i++)
        {
            
        }
        
    }
    return 0;
}