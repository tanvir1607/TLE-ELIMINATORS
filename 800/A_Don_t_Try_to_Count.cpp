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
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;
        
        int count = -1;
        for (int i = 0; i <= 5; i++)
        {
            if (x.find(s) != string::npos)
            {
                count = i;
                break;
            }
            else x += x;
        }
        cout << count << endl;
    }

    return 0;
}