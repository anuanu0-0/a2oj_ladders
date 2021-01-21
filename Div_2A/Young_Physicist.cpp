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
    int x, y, z, xs = 0, ys = 0, zs = 0;
    test
    {
        cin >> x >> y >> z;
        xs += x;
        ys += y;
        zs += z;
    }
    if (!xs && !ys && !zs)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}
