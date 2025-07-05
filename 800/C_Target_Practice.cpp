// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define endl '\n'
// #define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

// const int ROW = 10, COL = 10;
// int scores[ROW][COL] = {
//                         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//                         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
//                         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
//                         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
//                         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
//                         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
//                         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
//                         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
//                         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
//                         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//                         };

// int main() 
// {
//     optimize();

//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int score = 0;
//         for (int i = 0; i < ROW; i++)
//         {
//             for (int j = 0; j < COL; j++)
//             {
//                 char ch;
//                 cin >> ch;
//                 if (ch == 'X') score += scores[i][j];
//             }
//         }
//         cout << score << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int size = 10;
    int test; 
    cin >> test;
    while (test--)
    {
        vector<string> vec(size);
        for (string &s : vec) cin >> s;

        int total = 0;
        for(int row = 0; row < size; row++)
        {
            for(int col = 0; col < size; col++)
            {
                if(vec[row][col] == 'X')
                {
                    int edgeRowDis = min(row, size - 1 - row),
                        edgeColDis = min(col, size - 1 - col);
                    total += 1 + min(edgeRowDis, edgeColDis);;
                }
            }
        }
        cout << total << endl;
    }

    return 0;
}

