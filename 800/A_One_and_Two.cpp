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
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        int count_of_2 = count(vec.begin(), vec.end(), 2),
            index = -1,
            found = 0;
        
        if (count_of_2) 
        {
            for (int i = 0; i < size; i++)
            {
                found += vec[i] == 2;
                if (2 * found == count_of_2)
                {
                    index = i + 1;
                    break;
                }
            }
            cout << index << endl;
        }
        else cout << 1 << endl;
    }

    return 0;
}