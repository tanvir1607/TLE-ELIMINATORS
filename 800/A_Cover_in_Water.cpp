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
        string str;
        cin >> str;

        bool found = false;
        if (size >= 3)
        {
            for (int i = 0, j = 1, k = 2; k < size; i++, j++, k++)
            {
                if (str[i] == '.' && str[j] == '.' && str[k] == '.')
                {
                    found = true;
                    break;
                }
            }
        }
        cout << (found ? 2 : count(str.begin(), str.end(), '.')) << endl;
    }

    return 0;
}