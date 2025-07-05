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
        int size;
        cin >> size;
        map<int, int> freq;
        for (int i = 0; i < size; i++)
        {
            int x;
            cin >> x, freq[x]++;
        }
        int mapSize = freq.size(),
            f1 = freq.begin()->second, 
            f2 = freq.rbegin()->second;
        cout << (mapSize <= 2 && 
                (f1 == f2 || ((size & 1) && abs(f1 - f2) == 1)) ?
                "Yes" : "No") << endl;
    }

    return 0;
}