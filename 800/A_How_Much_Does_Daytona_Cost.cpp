#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int size, k;
        cin >> size >> k;
        map<int, bool> Map;
        while (size--)
        {
            int x;
            cin >> x, Map[x] = true;
        }
        cout << (Map[k] ? "YES" : "NO") << endl;
    }

    return 0;
}