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
        int sum = 0;
        for (int i = 0; i < size - 1; i++)
        {
            int x;
            cin >> x, sum += x;
        }
        cout << (-1) * sum << endl;
    }

    return 0;
}
