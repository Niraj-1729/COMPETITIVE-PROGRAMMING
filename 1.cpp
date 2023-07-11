#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;

        set<int> S;
        for (int i = 1; i <= N; i++)
        {
            S.insert(i);
        }

        vector<int> Q(M);
        for (int i = 0; i < M; i++)
        {
            cin >> Q[i];
        }

        int cost = 0;
        for (int i = 0; i < M; i++)
        {
            auto it = S.lower_bound(Q[i]);
            if (*it == Q[i])
            {
                cost += Q[i];
                S.erase(it);
            }
            else
            {
                cout <<    Q[i]<< endl;
            }
        }

        cout <<  cost << endl;
        cout <<;
        for (int num : S)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}