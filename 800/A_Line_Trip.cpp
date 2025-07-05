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
        int size, dest;
        cin >> size>> dest;
        vector<int> vec(size), diff(size + 1);
        for (int &x : vec) cin >> x;
        
        diff[0] = vec.front(), diff[size] = 2 * (dest - vec.back());
        for (int i = 1; i < size; i++) diff[i] = vec[i] - vec[i - 1];
        cout << *max_element(diff.begin(), diff.end()) << endl;
    }

    return 0;
}
