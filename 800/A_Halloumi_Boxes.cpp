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
        vector<int> vec(size);
        for (int &x : vec) cin >> x;
        cout << (is_sorted(vec.begin(), vec.end()) || k > 1 ? 
                "YES" : "NO") << endl;
    }

    return 0;
}
