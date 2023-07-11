#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i <= n; i++)
        {
            if (a[n] != a[n - i])
            {
                sum = a[n] + a[n - 1];

                cout << sum << endl;
            }
            break;
        }
    }
    return 0;
}
