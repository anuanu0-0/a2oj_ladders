#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'

#define vi vector<int>
#define pb push_back
#define mii map<int, int>

int main()
{
    int mat[5][5], x, y;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    int res = (max(x, 2) - min(x, 2)) + (max(y, 2) - min(y, 2));
    cout << res << endl;
    return 0;
}
