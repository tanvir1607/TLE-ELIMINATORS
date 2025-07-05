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
        int num;
        cin >> num;

        int ans = 0, div = 1e5;
        while (num)
        {
            if (num / div) ans += num / div, num = div - 1;
            div /= 10;
        }
        cout << ans << endl;
    }

    return 0;
}