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
        int n, a, b;
        cin >> n >> a >> b;
        if (a + b <= n - 2 || (n == a && n == b)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}