#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int dx[4] = {1, -1, -1, 1}, 
    dy[4] = {1, 1, -1, -1};

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        ll a, b, x_king, y_king, x_queen, y_queen;
        cin >> a >> b >> x_king >> y_king >> x_queen >> y_queen;

        set<pair<int,int>> king_hits, queen_hits;
        for(int i = 0; i < 4; i++)
        {
            king_hits.insert({x_king + dx[i]*a, y_king + dy[i]*b});
            king_hits.insert({x_king + dx[i]*b, y_king + dy[i]*a});

            queen_hits.insert({x_queen + dx[i]*a, y_queen + dy[i]*b});
            queen_hits.insert({x_queen + dx[i]*b, y_queen + dy[i]*a});
        }

        int ans = 0;
        for (auto position : king_hits) ans += queen_hits.count(position);
        cout << ans << endl;
    }
    return 0;
}
